#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QWidget>

namespace Ui {
class ChangePassword;
}

class ChangePassword : public QWidget
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent = 0);
    ~ChangePassword();

private slots:
    void on_yesButton_clicked();

    void on_noButton_clicked();

private:
    Ui::ChangePassword *ui;
};

#endif // CHANGEPASSWORD_H
