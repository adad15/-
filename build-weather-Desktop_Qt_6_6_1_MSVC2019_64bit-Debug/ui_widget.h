/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QLineEdit *cityLineEdit;
    QLabel *dateLb;
    QFrame *hline_1;
    QFrame *hline_10;
    QFrame *hline_11;
    QLabel *titlelabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *shiduTitleLb;
    QLabel *fengliLb;
    QLabel *fengxiangTitleLb;
    QLabel *pm25Lb;
    QLabel *pm25TitleLb;
    QLabel *fengliTitleLb;
    QLabel *fengxiangLb;
    QLabel *shiduLb;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *cityLb;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *high0Lb;
    QLabel *type2Lb;
    QLabel *date5Lb;
    QLabel *high3Lb;
    QLabel *week3Lb;
    QLabel *week4Lb;
    QLabel *quxainLb;
    QLabel *date1Lb;
    QLabel *label_71;
    QLabel *low5Lb;
    QLabel *date4Lb;
    QLabel *high5Lb;
    QLabel *low4Lb;
    QLabel *quality3Lb;
    QLabel *type0Lb;
    QLabel *high2Lb;
    QLabel *low0Lb;
    QLabel *high4Lb;
    QLabel *type5Lb;
    QLabel *date3Lb;
    QLabel *quality4Lb;
    QLabel *quality2Lb;
    QLabel *type1Lb;
    QLabel *quality1Lb;
    QLabel *high1Lb;
    QLabel *low2Lb;
    QLabel *week0Lb;
    QLabel *date2Lb;
    QLabel *type4Lb;
    QLabel *date0Lb;
    QLabel *low1Lb;
    QLabel *low3Lb;
    QLabel *week5Lb;
    QLabel *week1Lb;
    QLabel *week2Lb;
    QLabel *quality0Lb;
    QLabel *quality5Lb;
    QLabel *type3Lb;
    QLabel *typelco5Lb;
    QLabel *typelco4Lb;
    QLabel *typelco3Lb;
    QLabel *typelco2Lb;
    QLabel *typelco0Lb;
    QLabel *typelco1Lb;
    QLabel *leafLb;
    QLabel *qualityLb;
    QLabel *temLb;
    QLabel *typeLb;
    QLabel *typelcoLb;
    QLabel *noticeLb;
    QFrame *vline_1;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QTextBrowser *ganmaoBrowser;
    QToolButton *searchBt;
    QToolButton *refreshBt;
    QLabel *sunRiseSetLb;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 450);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 800, 450));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/images/backgroud.png);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QLabel{\n"
"font: 25 10pt \"Microsoft YaHei\";\n"
"border-radius: 4px;\n"
"background-color: argb(60, 60, 60, 130);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"Line{\n"
"background-color: rgb(0, 85, 0);\n"
"}"));
        cityLineEdit = new QLineEdit(widget);
        cityLineEdit->setObjectName("cityLineEdit");
        cityLineEdit->setGeometry(QRect(575, 10, 171, 31));
        dateLb = new QLabel(widget);
        dateLb->setObjectName("dateLb");
        dateLb->setGeometry(QRect(190, 3, 421, 41));
        dateLb->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color: rgb(0, 170, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        dateLb->setAlignment(Qt::AlignCenter);
        hline_1 = new QFrame(widget);
        hline_1->setObjectName("hline_1");
        hline_1->setGeometry(QRect(10, 45, 781, 1));
        hline_1->setFrameShape(QFrame::HLine);
        hline_1->setFrameShadow(QFrame::Sunken);
        hline_10 = new QFrame(widget);
        hline_10->setObjectName("hline_10");
        hline_10->setGeometry(QRect(10, 173, 351, 1));
        hline_10->setFrameShape(QFrame::HLine);
        hline_10->setFrameShadow(QFrame::Sunken);
        hline_11 = new QFrame(widget);
        hline_11->setObjectName("hline_11");
        hline_11->setGeometry(QRect(10, 325, 351, 1));
        hline_11->setFrameShape(QFrame::HLine);
        hline_11->setFrameShadow(QFrame::Sunken);
        titlelabel = new QLabel(widget);
        titlelabel->setObjectName("titlelabel");
        titlelabel->setGeometry(QRect(80, 10, 171, 31));
        titlelabel->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        titlelabel->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 180, 351, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        shiduTitleLb = new QLabel(gridLayoutWidget);
        shiduTitleLb->setObjectName("shiduTitleLb");
        shiduTitleLb->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        shiduTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduTitleLb, 0, 0, 1, 1);

        fengliLb = new QLabel(gridLayoutWidget);
        fengliLb->setObjectName("fengliLb");
        fengliLb->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        fengliLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fengliLb, 3, 1, 1, 2);

        fengxiangTitleLb = new QLabel(gridLayoutWidget);
        fengxiangTitleLb->setObjectName("fengxiangTitleLb");
        fengxiangTitleLb->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        fengxiangTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fengxiangTitleLb, 2, 0, 1, 1);

        pm25Lb = new QLabel(gridLayoutWidget);
        pm25Lb->setObjectName("pm25Lb");
        pm25Lb->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        pm25Lb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25Lb, 1, 1, 1, 2);

        pm25TitleLb = new QLabel(gridLayoutWidget);
        pm25TitleLb->setObjectName("pm25TitleLb");
        pm25TitleLb->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        pm25TitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25TitleLb, 1, 0, 1, 1);

        fengliTitleLb = new QLabel(gridLayoutWidget);
        fengliTitleLb->setObjectName("fengliTitleLb");
        fengliTitleLb->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        fengliTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fengliTitleLb, 3, 0, 1, 1);

        fengxiangLb = new QLabel(gridLayoutWidget);
        fengxiangLb->setObjectName("fengxiangLb");
        fengxiangLb->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        fengxiangLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fengxiangLb, 2, 1, 1, 2);

        shiduLb = new QLabel(gridLayoutWidget);
        shiduLb->setObjectName("shiduLb");
        shiduLb->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        shiduLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduLb, 0, 1, 1, 2);

        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(230, 60, 111, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("image: url(:/icons/location.ico);\n"
"background-color: rgba(60, 60, 60, 0);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        cityLb = new QLabel(gridLayoutWidget_2);
        cityLb->setObjectName("cityLb");
        cityLb->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        cityLb->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(cityLb, 0, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(widget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(370, 50, 421, 381));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        high0Lb = new QLabel(gridLayoutWidget_3);
        high0Lb->setObjectName("high0Lb");
        high0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        high0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high0Lb, 6, 0, 1, 1);

        type2Lb = new QLabel(gridLayoutWidget_3);
        type2Lb->setObjectName("type2Lb");
        type2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        type2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type2Lb, 3, 2, 1, 1);

        date5Lb = new QLabel(gridLayoutWidget_3);
        date5Lb->setObjectName("date5Lb");
        date5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        date5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date5Lb, 1, 5, 1, 1);

        high3Lb = new QLabel(gridLayoutWidget_3);
        high3Lb->setObjectName("high3Lb");
        high3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        high3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high3Lb, 6, 3, 1, 1);

        week3Lb = new QLabel(gridLayoutWidget_3);
        week3Lb->setObjectName("week3Lb");
        week3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        week3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week3Lb, 0, 3, 1, 1);

        week4Lb = new QLabel(gridLayoutWidget_3);
        week4Lb->setObjectName("week4Lb");
        week4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        week4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week4Lb, 0, 4, 1, 1);

        quxainLb = new QLabel(gridLayoutWidget_3);
        quxainLb->setObjectName("quxainLb");
        quxainLb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quxainLb, 7, 0, 3, 6);

        date1Lb = new QLabel(gridLayoutWidget_3);
        date1Lb->setObjectName("date1Lb");
        date1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        date1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date1Lb, 1, 1, 1, 1);

        label_71 = new QLabel(gridLayoutWidget_3);
        label_71->setObjectName("label_71");

        gridLayout_3->addWidget(label_71, 2, 0, 1, 1);

        low5Lb = new QLabel(gridLayoutWidget_3);
        low5Lb->setObjectName("low5Lb");
        low5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        low5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low5Lb, 10, 5, 1, 1);

        date4Lb = new QLabel(gridLayoutWidget_3);
        date4Lb->setObjectName("date4Lb");
        date4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        date4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date4Lb, 1, 4, 1, 1);

        high5Lb = new QLabel(gridLayoutWidget_3);
        high5Lb->setObjectName("high5Lb");
        high5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        high5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high5Lb, 6, 5, 1, 1);

        low4Lb = new QLabel(gridLayoutWidget_3);
        low4Lb->setObjectName("low4Lb");
        low4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        low4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low4Lb, 10, 4, 1, 1);

        quality3Lb = new QLabel(gridLayoutWidget_3);
        quality3Lb->setObjectName("quality3Lb");
        quality3Lb->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        quality3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality3Lb, 2, 3, 1, 1);

        type0Lb = new QLabel(gridLayoutWidget_3);
        type0Lb->setObjectName("type0Lb");
        type0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        type0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type0Lb, 3, 0, 1, 1);

        high2Lb = new QLabel(gridLayoutWidget_3);
        high2Lb->setObjectName("high2Lb");
        high2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        high2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high2Lb, 6, 2, 1, 1);

        low0Lb = new QLabel(gridLayoutWidget_3);
        low0Lb->setObjectName("low0Lb");
        low0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        low0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low0Lb, 10, 0, 1, 1);

        high4Lb = new QLabel(gridLayoutWidget_3);
        high4Lb->setObjectName("high4Lb");
        high4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        high4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high4Lb, 6, 4, 1, 1);

        type5Lb = new QLabel(gridLayoutWidget_3);
        type5Lb->setObjectName("type5Lb");
        type5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        type5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type5Lb, 3, 5, 1, 1);

        date3Lb = new QLabel(gridLayoutWidget_3);
        date3Lb->setObjectName("date3Lb");
        date3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        date3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date3Lb, 1, 3, 1, 1);

        quality4Lb = new QLabel(gridLayoutWidget_3);
        quality4Lb->setObjectName("quality4Lb");
        quality4Lb->setStyleSheet(QString::fromUtf8("color: rgb(170,0, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        quality4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality4Lb, 2, 4, 1, 1);

        quality2Lb = new QLabel(gridLayoutWidget_3);
        quality2Lb->setObjectName("quality2Lb");
        quality2Lb->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        quality2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality2Lb, 2, 2, 1, 1);

        type1Lb = new QLabel(gridLayoutWidget_3);
        type1Lb->setObjectName("type1Lb");
        type1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        type1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type1Lb, 3, 1, 1, 1);

        quality1Lb = new QLabel(gridLayoutWidget_3);
        quality1Lb->setObjectName("quality1Lb");
        quality1Lb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        quality1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality1Lb, 2, 1, 1, 1);

        high1Lb = new QLabel(gridLayoutWidget_3);
        high1Lb->setObjectName("high1Lb");
        high1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        high1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high1Lb, 6, 1, 1, 1);

        low2Lb = new QLabel(gridLayoutWidget_3);
        low2Lb->setObjectName("low2Lb");
        low2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        low2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low2Lb, 10, 2, 1, 1);

        week0Lb = new QLabel(gridLayoutWidget_3);
        week0Lb->setObjectName("week0Lb");
        week0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        week0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week0Lb, 0, 0, 1, 1);

        date2Lb = new QLabel(gridLayoutWidget_3);
        date2Lb->setObjectName("date2Lb");
        date2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        date2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date2Lb, 1, 2, 1, 1);

        type4Lb = new QLabel(gridLayoutWidget_3);
        type4Lb->setObjectName("type4Lb");
        type4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        type4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type4Lb, 3, 4, 1, 1);

        date0Lb = new QLabel(gridLayoutWidget_3);
        date0Lb->setObjectName("date0Lb");
        date0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        date0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date0Lb, 1, 0, 1, 1);

        low1Lb = new QLabel(gridLayoutWidget_3);
        low1Lb->setObjectName("low1Lb");
        low1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        low1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low1Lb, 10, 1, 1, 1);

        low3Lb = new QLabel(gridLayoutWidget_3);
        low3Lb->setObjectName("low3Lb");
        low3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        low3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low3Lb, 10, 3, 1, 1);

        week5Lb = new QLabel(gridLayoutWidget_3);
        week5Lb->setObjectName("week5Lb");
        week5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        week5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week5Lb, 0, 5, 1, 1);

        week1Lb = new QLabel(gridLayoutWidget_3);
        week1Lb->setObjectName("week1Lb");
        week1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        week1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week1Lb, 0, 1, 1, 1);

        week2Lb = new QLabel(gridLayoutWidget_3);
        week2Lb->setObjectName("week2Lb");
        week2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        week2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week2Lb, 0, 2, 1, 1);

        quality0Lb = new QLabel(gridLayoutWidget_3);
        quality0Lb->setObjectName("quality0Lb");
        quality0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        quality0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality0Lb, 2, 0, 1, 1);

        quality5Lb = new QLabel(gridLayoutWidget_3);
        quality5Lb->setObjectName("quality5Lb");
        quality5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        quality5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality5Lb, 2, 5, 1, 1);

        type3Lb = new QLabel(gridLayoutWidget_3);
        type3Lb->setObjectName("type3Lb");
        type3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        type3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type3Lb, 3, 3, 1, 1);

        typelco5Lb = new QLabel(gridLayoutWidget_3);
        typelco5Lb->setObjectName("typelco5Lb");
        typelco5Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/xiaoyu.png);"));
        typelco5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typelco5Lb, 4, 5, 2, 1);

        typelco4Lb = new QLabel(gridLayoutWidget_3);
        typelco4Lb->setObjectName("typelco4Lb");
        typelco4Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/xiaoyu.png);"));
        typelco4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typelco4Lb, 4, 4, 2, 1);

        typelco3Lb = new QLabel(gridLayoutWidget_3);
        typelco3Lb->setObjectName("typelco3Lb");
        typelco3Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/xiaoyu.png);"));
        typelco3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typelco3Lb, 4, 3, 2, 1);

        typelco2Lb = new QLabel(gridLayoutWidget_3);
        typelco2Lb->setObjectName("typelco2Lb");
        typelco2Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/xiaoyu.png);"));
        typelco2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typelco2Lb, 4, 2, 2, 1);

        typelco0Lb = new QLabel(gridLayoutWidget_3);
        typelco0Lb->setObjectName("typelco0Lb");
        typelco0Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/xiaoyu.png);"));
        typelco0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typelco0Lb, 4, 0, 2, 1);

        typelco1Lb = new QLabel(gridLayoutWidget_3);
        typelco1Lb->setObjectName("typelco1Lb");
        typelco1Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/xiaoyu.png);"));
        typelco1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typelco1Lb, 4, 1, 2, 1);

        leafLb = new QLabel(widget);
        leafLb->setObjectName("leafLb");
        leafLb->setGeometry(QRect(18, 58, 20, 20));
        leafLb->setStyleSheet(QString::fromUtf8("image: url(:/icons/leaf.ico);\n"
"background-color: rgba(255, 255, 255, 0);"));
        leafLb->setAlignment(Qt::AlignCenter);
        qualityLb = new QLabel(widget);
        qualityLb->setObjectName("qualityLb");
        qualityLb->setGeometry(QRect(38, 58, 56, 20));
        qualityLb->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        qualityLb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temLb = new QLabel(widget);
        temLb->setObjectName("temLb");
        temLb->setGeometry(QRect(10, 50, 241, 101));
        temLb->setStyleSheet(QString::fromUtf8("font: 50pt \"Arial\";\n"
"color: rgb(0, 85, 0);"));
        temLb->setAlignment(Qt::AlignCenter);
        typeLb = new QLabel(widget);
        typeLb->setObjectName("typeLb");
        typeLb->setGeometry(QRect(140, 120, 101, 31));
        typeLb->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        typeLb->setAlignment(Qt::AlignCenter);
        typelcoLb = new QLabel(widget);
        typelcoLb->setObjectName("typelcoLb");
        typelcoLb->setGeometry(QRect(230, 100, 101, 71));
        typelcoLb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/qing.png);\n"
"background-color: rgba(60, 60, 60, 0);"));
        typelcoLb->setAlignment(Qt::AlignCenter);
        noticeLb = new QLabel(widget);
        noticeLb->setObjectName("noticeLb");
        noticeLb->setGeometry(QRect(10, 150, 351, 21));
        noticeLb->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        vline_1 = new QFrame(widget);
        vline_1->setObjectName("vline_1");
        vline_1->setGeometry(QRect(215, 330, 1, 111));
        vline_1->setFrameShape(QFrame::VLine);
        vline_1->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget_4 = new QWidget(widget);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(10, 330, 201, 114));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_4);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 0, 2, 1);

        ganmaoBrowser = new QTextBrowser(gridLayoutWidget_4);
        ganmaoBrowser->setObjectName("ganmaoBrowser");

        gridLayout_5->addWidget(ganmaoBrowser, 0, 1, 1, 1);

        searchBt = new QToolButton(widget);
        searchBt->setObjectName("searchBt");
        searchBt->setGeometry(QRect(722, 15, 20, 20));
        searchBt->setCursor(QCursor(Qt::PointingHandCursor));
        searchBt->setStyleSheet(QString::fromUtf8("image: url(:/icons/search.ico);\n"
"background-color: rgba(255, 255, 255, 0);"));
        refreshBt = new QToolButton(widget);
        refreshBt->setObjectName("refreshBt");
        refreshBt->setGeometry(QRect(753, 10, 37, 31));
        refreshBt->setCursor(QCursor(Qt::PointingHandCursor));
        refreshBt->setStyleSheet(QString::fromUtf8("image: url(:/icons/refresh.ico);\n"
"background-color: rgba(255, 255, 255, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/refresh.ico"), QSize(), QIcon::Normal, QIcon::Off);
        refreshBt->setIcon(icon);
        refreshBt->setIconSize(QSize(31, 31));
        sunRiseSetLb = new QLabel(widget);
        sunRiseSetLb->setObjectName("sunRiseSetLb");
        sunRiseSetLb->setGeometry(QRect(220, 340, 150, 100));
        sunRiseSetLb->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        dateLb->setText(QCoreApplication::translate("Widget", "2024-01-29", nullptr));
        titlelabel->setText(QCoreApplication::translate("Widget", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
        shiduTitleLb->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        fengliLb->setText(QCoreApplication::translate("Widget", "<3\347\272\247", nullptr));
        fengxiangTitleLb->setText(QCoreApplication::translate("Widget", "\351\243\216\345\220\221", nullptr));
        pm25Lb->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pm25TitleLb->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        fengliTitleLb->setText(QCoreApplication::translate("Widget", "\351\243\216\345\212\233", nullptr));
        fengxiangLb->setText(QCoreApplication::translate("Widget", "\350\245\277\345\214\227\351\243\216", nullptr));
        shiduLb->setText(QCoreApplication::translate("Widget", "95%", nullptr));
        cityLb->setText(QCoreApplication::translate("Widget", "\345\244\247\350\277\236", nullptr));
        high0Lb->setText(QCoreApplication::translate("Widget", "10\302\260", nullptr));
        type2Lb->setText(QCoreApplication::translate("Widget", "\351\230\264", nullptr));
        date5Lb->setText(QCoreApplication::translate("Widget", "06/06", nullptr));
        high3Lb->setText(QCoreApplication::translate("Widget", "10\302\260", nullptr));
        week3Lb->setText(QCoreApplication::translate("Widget", "\345\220\216\345\244\251", nullptr));
        week4Lb->setText(QCoreApplication::translate("Widget", "\345\221\250\344\272\224", nullptr));
        date1Lb->setText(QCoreApplication::translate("Widget", "02/02", nullptr));
        label_71->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        low5Lb->setText(QCoreApplication::translate("Widget", "-1\302\260", nullptr));
        date4Lb->setText(QCoreApplication::translate("Widget", "05/05", nullptr));
        high5Lb->setText(QCoreApplication::translate("Widget", "10\302\260", nullptr));
        low4Lb->setText(QCoreApplication::translate("Widget", "-1\302\260", nullptr));
        quality3Lb->setText(QCoreApplication::translate("Widget", "\344\270\255\345\272\246\346\261\241\346\237\223", nullptr));
        type0Lb->setText(QCoreApplication::translate("Widget", "\351\230\264", nullptr));
        high2Lb->setText(QCoreApplication::translate("Widget", "10\302\260", nullptr));
        low0Lb->setText(QCoreApplication::translate("Widget", "-1\302\260", nullptr));
        high4Lb->setText(QCoreApplication::translate("Widget", "10\302\260", nullptr));
        type5Lb->setText(QCoreApplication::translate("Widget", "\351\230\264", nullptr));
        date3Lb->setText(QCoreApplication::translate("Widget", "04/04", nullptr));
        quality4Lb->setText(QCoreApplication::translate("Widget", "\344\270\245\351\207\215\346\261\241\346\237\223", nullptr));
        quality2Lb->setText(QCoreApplication::translate("Widget", "\350\275\273\345\272\246\346\261\241\346\237\223", nullptr));
        type1Lb->setText(QCoreApplication::translate("Widget", "\351\230\264", nullptr));
        quality1Lb->setText(QCoreApplication::translate("Widget", "\350\211\257\345\245\275", nullptr));
        high1Lb->setText(QCoreApplication::translate("Widget", "10\302\260", nullptr));
        low2Lb->setText(QCoreApplication::translate("Widget", "-1\302\260", nullptr));
        week0Lb->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        date2Lb->setText(QCoreApplication::translate("Widget", "03/03", nullptr));
        type4Lb->setText(QCoreApplication::translate("Widget", "\351\230\264", nullptr));
        date0Lb->setText(QCoreApplication::translate("Widget", "01/01", nullptr));
        low1Lb->setText(QCoreApplication::translate("Widget", "-1\302\260", nullptr));
        low3Lb->setText(QCoreApplication::translate("Widget", "-1\302\260", nullptr));
        week5Lb->setText(QCoreApplication::translate("Widget", "\345\221\250\345\205\255", nullptr));
        week1Lb->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        week2Lb->setText(QCoreApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        quality0Lb->setText(QCoreApplication::translate("Widget", "\344\274\230\350\264\250", nullptr));
        quality5Lb->setText(QCoreApplication::translate("Widget", "\350\211\257\345\245\275", nullptr));
        type3Lb->setText(QCoreApplication::translate("Widget", "\351\230\264", nullptr));
        qualityLb->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        temLb->setText(QCoreApplication::translate("Widget", "9\302\260", nullptr));
        typeLb->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        noticeLb->setText(QCoreApplication::translate("Widget", "\345\244\251\346\260\224\346\217\220\347\244\272", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p>\346\204\237<br/>\345\206\222<br/>\346\214\207<br/>\346\225\260</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
