#include "widget.h"

#include <QApplication>
#include <QFile>
#include <QString>
#include <QLatin1String>
#include <QDebug>

QString style(){
//    ://style.css
    QFile file("://style.css");
    file.open(QFile::ReadOnly);
    QString styleSheet = file.readAll();

    qDebug()<<styleSheet;

    return styleSheet;
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    a.setStyleSheet(style());
    Widget w;
    w.show();
    return a.exec();
}
