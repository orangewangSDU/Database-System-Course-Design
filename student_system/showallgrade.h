#ifndef SHOWALLGRADE_H
#define SHOWALLGRADE_H

#include <QWidget>
#include <QTableView>
namespace Ui {
class ShowAllGrade;
}

class ShowAllGrade : public QWidget
{
    Q_OBJECT

public:
    explicit ShowAllGrade(QWidget *parent = 0);
    ~ShowAllGrade();
private slots:
     void TableExcel(QTableView *tableview,QString title);
private slots:
    void on_btnBack_clicked();

    void on_btnSelect_clicked();

    void on_pushButton_clicked();

private:
    Ui::ShowAllGrade *ui;
};

#endif // SHOWALLGRADE_H
