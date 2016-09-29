/********************************************************************************
** Form generated from reading UI file 'timesetuptrue.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMESETUPTRUE_H
#define UI_TIMESETUPTRUE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_TimesetupTrue
{
public:
    QPushButton *pushButton;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TimesetupTrue)
    {
        if (TimesetupTrue->objectName().isEmpty())
            TimesetupTrue->setObjectName(QString::fromUtf8("TimesetupTrue"));
        TimesetupTrue->resize(1024, 600);
        pushButton = new QPushButton(TimesetupTrue);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(957, 552, 48, 28));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/imagejy/back.png);"));
        timeEdit = new QTimeEdit(TimesetupTrue);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(57, 90, 191, 81));
        timeEdit->setReadOnly(false);
        timeEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        timeEdit->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        timeEdit->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        timeEdit->setMaximumDateTime(QDateTime(QDate(2000, 1, 1), QTime(23, 59, 59)));
        timeEdit->setCurrentSection(QDateTimeEdit::AmPmSection);
        timeEdit->setCalendarPopup(true);
        timeEdit->setCurrentSectionIndex(0);
        dateEdit = new QDateEdit(TimesetupTrue);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(60, 210, 191, 81));
        dateEdit->setDateTime(QDateTime(QDate(2016, 9, 18), QTime(0, 0, 0)));
        dateEdit->setDate(QDate(2016, 9, 18));
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(0);
        lcdNumber = new QLCDNumber(TimesetupTrue);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(280, 210, 181, 81));
        lcdNumber->setDigitCount(10);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber_2 = new QLCDNumber(TimesetupTrue);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(280, 90, 181, 81));
        lcdNumber_2->setDigitCount(10);
        lcdNumber_3 = new QLCDNumber(TimesetupTrue);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(20, 570, 101, 31));
        lcdNumber_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lcdNumber_3->setFrameShape(QFrame::NoFrame);
        lcdNumber_3->setDigitCount(8);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_4 = new QLCDNumber(TimesetupTrue);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(0, 540, 141, 31));
        lcdNumber_4->setAutoFillBackground(false);
        lcdNumber_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lcdNumber_4->setFrameShape(QFrame::NoFrame);
        lcdNumber_4->setSmallDecimalPoint(false);
        lcdNumber_4->setNumDigits(10);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);
        pushButton_2 = new QPushButton(TimesetupTrue);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 340, 191, 71));

        retranslateUi(TimesetupTrue);

        QMetaObject::connectSlotsByName(TimesetupTrue);
    } // setupUi

    void retranslateUi(QDialog *TimesetupTrue)
    {
        TimesetupTrue->setWindowTitle(QApplication::translate("TimesetupTrue", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        timeEdit->setSpecialValueText(QString());
        pushButton_2->setText(QApplication::translate("TimesetupTrue", "Date Time Setup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TimesetupTrue: public Ui_TimesetupTrue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMESETUPTRUE_H
