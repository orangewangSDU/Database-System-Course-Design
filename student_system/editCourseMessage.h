#ifndef LURUKECHENGXINXI_H
#define LURUKECHENGXINXI_H

#include <QWidget>

namespace Ui {
class editCourseMessage;
}

class editCourseMessage : public QWidget
{
    Q_OBJECT

public:
    explicit editCourseMessage(QWidget *parent = 0);
    ~editCourseMessage();

private slots:
    void on_noButton_clicked();

    void on_yesButton_clicked();

private:
    Ui::editCourseMessage *ui;
};

#endif // LURUKECHENGXINXI_H
