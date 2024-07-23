#ifndef SELECTSELFGRADE_H
#define SELECTSELFGRADE_H

#include <QWidget>
#include <QTableView>
namespace Ui {
class SelectSelfGrade;
}

class SelectSelfGrade : public QWidget
{
    Q_OBJECT

public:
    explicit SelectSelfGrade(QWidget *parent = 0);
    ~SelectSelfGrade();
private slots:
     void TableExcel(QTableView *tableview,QString title);

private slots:
    void on_btnBack_clicked();

    void on_btnSelect_clicked();

    void on_out_clicked();

private:
    Ui::SelectSelfGrade *ui;
};

#endif // SELECTSELFGRADE_H
