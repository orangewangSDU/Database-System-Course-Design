#ifndef TEACHERCHANGE_H
#define TEACHERCHANGE_H

#include <QDockWidget>

namespace Ui {
class eidtTeacherMessage;
}

class eidtTeacherMessage : public QDockWidget
{
    Q_OBJECT

public:
    explicit eidtTeacherMessage(QWidget *parent = 0);
    ~eidtTeacherMessage();

private slots:
    void on_noButton_clicked();

    void on_yesButton_clicked();

private:
    Ui::eidtTeacherMessage *ui;
};

#endif // TEACHERCHANGE_H
