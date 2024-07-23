#include "selectselfgrade.h"
#include "ui_selectselfgrade.h"
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableWidget>
#include <QFileDialog>
#include <QDesktopServices>
#include <QMessageBox>
#include <QAxObject>
#include "myhelper.h"
#include "myapp.h"

SelectSelfGrade::SelectSelfGrade(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectSelfGrade)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_QuitOnClose,false);//关闭主窗口同时也会关闭子窗口
}

SelectSelfGrade::~SelectSelfGrade()
{
    delete ui;
}

void SelectSelfGrade::on_btnBack_clicked()
{
    this->close();
}

void SelectSelfGrade::on_btnSelect_clicked()
{
     QString studentId = Myapp::CurrentUserId;

     QSqlQueryModel *model = new QSqlQueryModel;
     model->setQuery("select * from student_course where student_id = '"+studentId+"';");
     model->setHeaderData(0, Qt::Horizontal, tr("学号"));
     model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
     model->setHeaderData(2, Qt::Horizontal, tr("课程号"));
     model->setHeaderData(3, Qt::Horizontal, tr("课程名"));
     model->setHeaderData(4, Qt::Horizontal, tr("成绩"));
     ui->tableView->setModel(model);
     ui->tableView->show();


}

void SelectSelfGrade::on_out_clicked()
{
    QString title;
    TableExcel(ui->tableView,title);
}
//第一个参数是页面上的表格，第二个是导出文件的表头数据
void SelectSelfGrade::TableExcel(QTableView *tableview,QString title)
{
    QString fileName = QFileDialog::getSaveFileName(tableview, "保存",QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),"Excel 文件(*.xls *.xlsx)");
    if (fileName!="")
    {
        QAxObject *excel = new QAxObject;
        if (excel->setControl("Excel.Application")) //连接Excel控件
        {
           excel->dynamicCall("SetVisible (bool Visible)","false");//不显示窗体
           excel->setProperty("DisplayAlerts", false);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示
           QAxObject *workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
           workbooks->dynamicCall("Add");//新建一个工作簿
           QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
           QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);

           int i,j;

           //QTableView 获取列数
            int colcount = tableview->model()->columnCount();
           //QTableView 获取行数
            int row = tableview->model()->rowCount();

           QAxObject *cell,*col;
           //标题行
           cell=worksheet->querySubObject("Cells(int,int)", 1, 1);
           cell->dynamicCall("SetValue(const QString&)", title);
           cell->querySubObject("Font")->setProperty("Size", 18);
           //调整行高
           worksheet->querySubObject("Range(const QString&)", "1:1")->setProperty("RowHeight", 30);
           //合并标题行
           QString cellTitle;
           cellTitle.append("A1:");
           cellTitle.append(QChar(colcount - 1 + 'A'));
           cellTitle.append(QString::number(1));
           QAxObject *range = worksheet->querySubObject("Range(const QString&)", cellTitle);
           range->setProperty("WrapText", true);
           range->setProperty("MergeCells", true);
           range->setProperty("HorizontalAlignment", -4108);//xlCenter
           range->setProperty("VerticalAlignment", -4108);//xlCenter
           //列标题
           for(i=0;i<colcount;i++)
           {
               QString columnName;
               columnName.append(QChar(i  + 'A'));
               columnName.append(":");
               columnName.append(QChar(i + 'A'));
               col = worksheet->querySubObject("Columns(const QString&)", columnName);
               col->setProperty("ColumnWidth", tableview->columnWidth(i)/6);
               cell=worksheet->querySubObject("Cells(int,int)", 2, i+1);
               columnName=ui->tableView->model()->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString();
               cell->dynamicCall("SetValue(const QString&)", columnName);
               cell->querySubObject("Font")->setProperty("Bold", true);
               cell->querySubObject("Interior")->setProperty("Color",QColor(191, 191, 191));
               cell->setProperty("HorizontalAlignment", -4108);//xlCenter
               cell->setProperty("VerticalAlignment", -4108);//xlCenter
           }

          //QTableView 获取表格数据部分
            for(i=0;i<row;i++) //行数
               {
                   for (j=0;j<colcount;j++)   //列数
                   {
                       QModelIndex index = ui->tableView->model()->index(i, j);
                       QString strdata=ui->tableView->model()->data(index).toString();
                       worksheet->querySubObject("Cells(int,int)", i+3, j+1)->dynamicCall("SetValue(const QString&)", strdata);
                   }
               }


           //画框线
           QString lrange;
           lrange.append("A2:");
           lrange.append(colcount - 1 + 'A');
           //lrange.append(QString::number(tableview->rowCount() + 2));
           lrange.append(QString::number(row + 2));
           range = worksheet->querySubObject("Range(const QString&)", lrange);
           range->querySubObject("Borders")->setProperty("LineStyle", QString::number(1));
           range->querySubObject("Borders")->setProperty("Color", QColor(0, 0, 0));
           //调整数据区行高
           QString rowsName;
           rowsName.append("2:");
          //rowsName.append(QString::number(tableview->rowCount() + 2));
          rowsName.append(QString::number(row + 2));
          range = worksheet->querySubObject("Range(const QString&)", rowsName);
          range->setProperty("RowHeight", 20);
          workbook->dynamicCall("SaveAs(const QString&)",QDir::toNativeSeparators(fileName));//保存至fileName
          workbook->dynamicCall("Close()");//关闭工作簿
          excel->dynamicCall("Quit()");//关闭excel
          delete excel;
          excel=NULL;
          if (QMessageBox::question(NULL,"完成","文件已经导出，是否现在打开？",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
          {
              QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(fileName)));
          }
      }
      else
      {
          QMessageBox::warning(NULL,"错误","未能创建 Excel 对象，请安装 Microsoft Excel。",QMessageBox::Apply);
      }
  }
}
