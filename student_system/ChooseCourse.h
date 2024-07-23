#ifndef CHOOSECOURSE_H
#define CHOOSECOURSE_H

#include <QWidget>

namespace Ui {
class ChooseCourse;
}

class ChooseCourse : public QWidget
{
    Q_OBJECT

public:
    explicit ChooseCourse(QWidget *parent = 0);
    ~ChooseCourse();

private slots:
    void on_noButton_clicked();

    void on_yesButton_clicked();

    void on_btnSelect_clicked();

private:
    Ui::ChooseCourse *ui;
};

#endif // CHOOSECOURSE_H
