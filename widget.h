#ifndef WIDGET_H
#define WIDGET_H
# include <QString>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    QTimer *timer;
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btn_start_clicked();
    void time_out();
    void resetAllVar();



    void on_btn_reset_clicked();

    void on_btn_pause_clicked();

private:
    Ui::Widget *ui;
    int sec=60,min=0;
    int task_time, session, break_time, session_current, session_count, break_count;
    bool isBreak=false;
    bool isPause=false;
    bool counter();
    void updateTimeLabel();
    void updateFocusBreakLabel();
    void updateNextLabel();
    void setOutputLabelSessionFinished();
    void updateLabels();
    QString sec_str, min_str;

};
#endif // WIDGET_H
