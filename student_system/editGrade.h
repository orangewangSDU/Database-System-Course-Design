#ifndef EDITGRADE_H
#define EDITGRADE_H

#include <QWidget>

namespace Ui {
class editGrade;
}

class editGrade : public QWidget
{
    Q_OBJECT

public:
    explicit editGrade(QWidget *parent = 0);
    ~editGrade();

private slots:
    void on_yesButton_clicked();

    void on_noButton_clicked();

private:
    Ui::editGrade *ui;
};

#endif // EDITGRADE_H
