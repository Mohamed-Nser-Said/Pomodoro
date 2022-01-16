#include "widget.h"
#include "ui_widget.h"
#include "QDebug"
#include "QTimer"

#include "QIcon"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Pomodoro");

    setWindowIcon(QIcon("://rec/tomato.png"));
    ui->btn_pause->setDisabled(true);
    timer = new QTimer(this);
    timer->setInterval(999);

    connect(timer, &QTimer::timeout, this, & Widget::time_out);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::resetAllVar() {

    task_time = ui->task_time_spinBox->value();
    break_time = ui->break_time_spinBox->value();
    session = ui->session_spinBox->value();

    break_count=session;
    min = task_time;
    sec=0;
    session_count=1;


}

void Widget::time_out() {
    if (!counter())
        updateLabels();

    else
        setOutputLabelSessionFinished();

}


void Widget::on_btn_start_clicked()
{
    ui->btn_pause->setDisabled(false);
    ui->btn_start->setDisabled(true);
    resetAllVar();
    updateLabels();
    timer->start();


}

void Widget::on_btn_reset_clicked()
{
    ui->btn_start->setDisabled(false);
    timer->stop();
    resetAllVar();
    setOutputLabelSessionFinished();
    
}

bool Widget::counter()
{
    if(--sec<0){
        sec=59; min--;
        if(min<0){

            if(session==session_count){

                return true;
            }
            else if(isBreak){
                isBreak= false;
                min=task_time-1;
                session_count++;
            }
            else if(!isBreak){
                isBreak= true;
                break_count--;
                min=break_time-1;
            }

        }

    }

    return false;

}

void Widget::updateTimeLabel()
{
    if(sec<10) sec_str = "0"+QString::number(sec);
    else sec_str = QString::number(sec);

    if(min<10) min_str = "0"+QString::number(min);
    else min_str = QString::number(min);

    ui->output_label->setText(min_str+" : "+sec_str);


}

void Widget::updateFocusBreakLabel()
{
    if (isBreak)
            ui->focus_label->setText("Break "+
                                          QString::number(session-break_count)+" of "+
                                          QString::number(session-1));

    else
            ui->focus_label->setText("Focus "+
                             QString::number(session_count)+" of "+
                             QString::number(session));
}

void Widget::updateNextLabel()
{
    if(!isBreak)
        ui->next_label->setText(QString("Next %0 min Break").arg(break_time));
    else
        ui->next_label->setText(QString("Next %0 min Focus").arg(task_time));

}

void Widget::updateLabels(){
    updateTimeLabel();
    updateFocusBreakLabel();
    updateNextLabel();
}

void Widget::setOutputLabelSessionFinished()
{
    ui->output_label->setText("00 : 00");
    ui->focus_label->setText("---");
    ui->next_label->setText("---");
    timer->stop();

}

void Widget::on_btn_pause_clicked()
{
    if(!isPause) {
        ui->btn_pause->setText("Resume");
        timer->stop();

    }

    else if(isPause){
        ui->btn_pause->setText("Pause");
        timer->start();
    }
    isPause=!isPause;

}

