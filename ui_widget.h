/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *ptn_back;
    QPushButton *pushButton_timesetup;
    QPushButton *pushButton_timesetup_2;
    QPushButton *pushButton_timesetup_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_showCan;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1024, 600);
        ptn_back = new QPushButton(Widget);
        ptn_back->setObjectName(QString::fromUtf8("ptn_back"));
        ptn_back->setGeometry(QRect(760, 550, 45, 33));
        ptn_back->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/imagejy/qihuan.png);"));
        pushButton_timesetup = new QPushButton(Widget);
        pushButton_timesetup->setObjectName(QString::fromUtf8("pushButton_timesetup"));
        pushButton_timesetup->setGeometry(QRect(860, 550, 41, 41));
        pushButton_timesetup->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/imagejy/setup.png);"));
        pushButton_timesetup_2 = new QPushButton(Widget);
        pushButton_timesetup_2->setObjectName(QString::fromUtf8("pushButton_timesetup_2"));
        pushButton_timesetup_2->setGeometry(QRect(674, 549, 37, 39));
        pushButton_timesetup_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/imagejy/zw/dianhua.png);"));
        pushButton_timesetup_3 = new QPushButton(Widget);
        pushButton_timesetup_3->setObjectName(QString::fromUtf8("pushButton_timesetup_3"));
        pushButton_timesetup_3->setGeometry(QRect(958, 550, 39, 37));
        pushButton_timesetup_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/imagejy/laba.png);\n"
""));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(453, 226, 104, 42));
        label->setStyleSheet(QString::fromUtf8("font: 22pt \"Ubuntu\";"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(453, 270, 104, 42));
        label_2->setStyleSheet(QString::fromUtf8("font: 22pt \"Ubuntu\";"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(453, 313, 104, 42));
        label_3->setStyleSheet(QString::fromUtf8("font: 22pt \"Ubuntu\";"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(453, 357, 104, 42));
        label_4->setStyleSheet(QString::fromUtf8("font: 22pt \"Ubuntu\";"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 400, 151, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 22pt \"Ubuntu\";"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 100, 441, 51));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(30, 570, 101, 31));
        lcdNumber->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setDigitCount(8);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2 = new QLCDNumber(Widget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(10, 540, 141, 31));
        lcdNumber_2->setAutoFillBackground(false);
        lcdNumber_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lcdNumber_2->setFrameShape(QFrame::NoFrame);
        lcdNumber_2->setSmallDecimalPoint(false);
        lcdNumber_2->setNumDigits(10);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 540, 41, 41));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(410, 540, 41, 41));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 540, 91, 41));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(460, 540, 91, 41));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_showCan = new QLabel(Widget);
        label_showCan->setObjectName(QString::fromUtf8("label_showCan"));
        label_showCan->setGeometry(QRect(390, 470, 301, 51));
        label_showCan->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 italic 22pt \"Ubuntu\";"));
        label_showCan->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(572, 548, 42, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/imagejy/zw/Media.png);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        ptn_back->setText(QString());
        pushButton_timesetup->setText(QString());
        pushButton_timesetup_2->setText(QString());
        pushButton_timesetup_3->setText(QString());
        label->setText(QApplication::translate("Widget", "123456", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p>123<span style=\" font-size:20pt;\"><br/></span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "<html><head/><body><p>456</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "<html><head/><body><p>123456<br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "<html><head/><body><p>123456<br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Widget", "FMI", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Widget", "SPN", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Widget", "fmivalue", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Widget", "spnValue", 0, QApplication::UnicodeUTF8));
        label_showCan->setText(QApplication::translate("Widget", "TextLabel   ", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
