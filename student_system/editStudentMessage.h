#ifndef EDITSTUDENTMESSAGE_H
#define EDITSTUDENTMESSAGE_H

#include <QWidget>

namespace Ui {
class editStudentMessage;
}

class editStudentMessage : public QWidget
{
    Q_OBJECT

public:
    explicit editStudentMessage(QWidget *parent = 0);
    ~editStudentMessage();

private slots:
    void on_noButton_clicked();

    void on_yesButton_clicked();

private:
    Ui::editStudentMessage *ui;
};

#endif // EDITSTUDENTMESSAGE_H
