#include <QtGui/QApplication>
#include "widget.h"
#include <QTextCodec>
#include <QtAVWidgets/QtAVWidgets>
//#include <QWSServer>
int main(int argc, char *argv[])
{
    QtAV::Widgets::registerRenderers();
    QApplication a(argc, argv);
    Widget w;
    w.show();
   // QApplication::setOverrideCursor(Qt::BlankCursor);//隐藏鼠标 光标
    //QWSServer::setCursorVisible(false);
    return a.exec();
}
