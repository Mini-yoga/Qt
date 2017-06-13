#include "mainwindow.h"
#include <QApplication>
#include <qtextcodec.h>
int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
