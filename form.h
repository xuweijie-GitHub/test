#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QDateTime>
#include <QTimer>
#include <QThread>
#include <testthread.h>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

    QDateTime curDateTime;
    QTimer *curtimer;

    TestThread *myTestThread;

    void TestThreadbuttonStop();
    void TestThreadbuttonStart();

signals:
    void aaaaaa();

    void myTestThreadStart(); //启动子线程的信号
    void TestThreadstart();

private slots:
    void on_lineEdit_editingFinished();

    void timerOut();

    void dealTestThreadSignal();
    void dealTestThreadClose();


    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

private:
    Ui::Form *ui;

    QThread *thread;

};

#endif // FORM_H
