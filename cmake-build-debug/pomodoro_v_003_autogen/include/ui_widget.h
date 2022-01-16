/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *output_label;
    QHBoxLayout *horizontalLayout_5;
    QLabel *focus_label;
    QLabel *next_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *task_time_spinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *session_spinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *break_time_spinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_pause;
    QPushButton *btn_reset;
    QPushButton *btn_start;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(225, 240);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        output_label = new QLabel(Widget);
        output_label->setObjectName(QString::fromUtf8("output_label"));
        QFont font;
        font.setPointSize(24);
        output_label->setFont(font);
        output_label->setAutoFillBackground(true);
        output_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(output_label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        focus_label = new QLabel(Widget);
        focus_label->setObjectName(QString::fromUtf8("focus_label"));
        QFont font1;
        font1.setPointSize(9);
        focus_label->setFont(font1);
        focus_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(focus_label);

        next_label = new QLabel(Widget);
        next_label->setObjectName(QString::fromUtf8("next_label"));
        next_label->setFont(font1);
        next_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(next_label);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        task_time_spinBox = new QSpinBox(Widget);
        task_time_spinBox->setObjectName(QString::fromUtf8("task_time_spinBox"));
        task_time_spinBox->setValue(20);

        horizontalLayout_2->addWidget(task_time_spinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        session_spinBox = new QSpinBox(Widget);
        session_spinBox->setObjectName(QString::fromUtf8("session_spinBox"));
        session_spinBox->setValue(4);

        horizontalLayout_3->addWidget(session_spinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        break_time_spinBox = new QSpinBox(Widget);
        break_time_spinBox->setObjectName(QString::fromUtf8("break_time_spinBox"));
        break_time_spinBox->setValue(5);

        horizontalLayout_4->addWidget(break_time_spinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_pause = new QPushButton(Widget);
        btn_pause->setObjectName(QString::fromUtf8("btn_pause"));

        horizontalLayout->addWidget(btn_pause);

        btn_reset = new QPushButton(Widget);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));

        horizontalLayout->addWidget(btn_reset);


        verticalLayout->addLayout(horizontalLayout);

        btn_start = new QPushButton(Widget);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));

        verticalLayout->addWidget(btn_start);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        output_label->setText(QCoreApplication::translate("Widget", "00 : 00", nullptr));
        focus_label->setText(QCoreApplication::translate("Widget", "---", nullptr));
        next_label->setText(QCoreApplication::translate("Widget", "---", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Task duration", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Sessions", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Break duration", nullptr));
        btn_pause->setText(QCoreApplication::translate("Widget", "Pause", nullptr));
        btn_reset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
        btn_start->setText(QCoreApplication::translate("Widget", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
