/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *leafLb;
    QLineEdit *cityLineEdit;
    QLabel *dataLb;
    QFrame *hline_10;
    QFrame *hline_11;
    QFrame *hline_1;
    QLabel *titleLb;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *fengxiangTitleLb;
    QLabel *fengliTitleLb;
    QLabel *shiduTitleLb;
    QLabel *pm25TitleLb;
    QLabel *shiduLb;
    QLabel *pm25Lb;
    QLabel *fangxiangLb;
    QLabel *fengliLb;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *cityLb;
    QLabel *label;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *low1Lb;
    QLabel *quality2Lb;
    QLabel *data1Lb;
    QLabel *data4Lb;
    QLabel *high3Lb;
    QLabel *week1Lb;
    QLabel *high0Lb;
    QLabel *week0Lb;
    QLabel *low3Lb;
    QLabel *high5Lb;
    QLabel *type2Lb;
    QLabel *quality1Lb;
    QLabel *week2Lb;
    QLabel *type3Lb;
    QLabel *high1Lb;
    QLabel *quality0Lb;
    QLabel *type0Lb;
    QLabel *low0Lb;
    QLabel *low5Lb;
    QLabel *quality5Lb;
    QLabel *type5Lb;
    QLabel *high2Lb;
    QLabel *low2Lb;
    QLabel *week4Lb;
    QLabel *type1Lb;
    QLabel *data2Lb;
    QLabel *week5Lb;
    QLabel *data3Lb;
    QLabel *type4Lb;
    QLabel *quality3Lb;
    QLabel *high4Lb;
    QLabel *curveLb;
    QLabel *lquality4Lb;
    QLabel *data0Lb;
    QLabel *week3Lb;
    QLabel *low4Lb;
    QLabel *data5Lb;
    QLabel *typelco5Lb;
    QLabel *typelco4Lb;
    QLabel *typelco3Lb;
    QLabel *typelco2Lb;
    QLabel *typelco0Lb;
    QLabel *typelco1Lb;
    QLabel *label_2;
    QLabel *qualityLb;
    QLabel *temLb;
    QLabel *typeLb;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 450);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/images/backgroud.png);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QLabel{\n"
"font: 25 10pt \"Microsoft YaHei\";\n"
"border-radius: 4px;\n"
"background-color: argb(60, 60, 60, 130);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"Line{\n"
"background-color: rgb(0, 85, 0);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        centralwidget->setGeometry(QRect(0, 0, 800, 450));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/images/backgroud.png);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"QLabel{\n"
"	font: 25 10pt \"Microsoft YaHei\";\n"
"	border-radius: 4px;\n"
"	background-color: argb(60, 60, 60, 130);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"Line{\n"
"	background-color: rgb(0, 85, 0);\n"
"}"));
        leafLb = new QWidget(centralwidget);
        leafLb->setObjectName("leafLb");
        leafLb->setGeometry(QRect(0, 0, 800, 450));
        cityLineEdit = new QLineEdit(leafLb);
        cityLineEdit->setObjectName("cityLineEdit");
        cityLineEdit->setGeometry(QRect(575, 10, 171, 31));
        dataLb = new QLabel(leafLb);
        dataLb->setObjectName("dataLb");
        dataLb->setGeometry(QRect(190, 3, 421, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200")});
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        dataLb->setFont(font);
        dataLb->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(170, 170, 255);"));
        dataLb->setAlignment(Qt::AlignCenter);
        hline_10 = new QFrame(leafLb);
        hline_10->setObjectName("hline_10");
        hline_10->setGeometry(QRect(10, 183, 351, 1));
        hline_10->setFrameShape(QFrame::HLine);
        hline_10->setFrameShadow(QFrame::Sunken);
        hline_11 = new QFrame(leafLb);
        hline_11->setObjectName("hline_11");
        hline_11->setGeometry(QRect(10, 335, 351, 1));
        hline_11->setFrameShape(QFrame::HLine);
        hline_11->setFrameShadow(QFrame::Sunken);
        hline_1 = new QFrame(leafLb);
        hline_1->setObjectName("hline_1");
        hline_1->setGeometry(QRect(10, 45, 781, 1));
        hline_1->setFrameShape(QFrame::HLine);
        hline_1->setFrameShadow(QFrame::Sunken);
        titleLb = new QLabel(leafLb);
        titleLb->setObjectName("titleLb");
        titleLb->setGeometry(QRect(80, 10, 117, 31));
        titleLb->setFont(font);
        titleLb->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color: rgb(170, 255, 255);"));
        gridLayoutWidget = new QWidget(leafLb);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 190, 351, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fengxiangTitleLb = new QLabel(gridLayoutWidget);
        fengxiangTitleLb->setObjectName("fengxiangTitleLb");
        fengxiangTitleLb->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        fengxiangTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fengxiangTitleLb, 2, 0, 1, 1);

        fengliTitleLb = new QLabel(gridLayoutWidget);
        fengliTitleLb->setObjectName("fengliTitleLb");
        fengliTitleLb->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        fengliTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fengliTitleLb, 3, 0, 1, 1);

        shiduTitleLb = new QLabel(gridLayoutWidget);
        shiduTitleLb->setObjectName("shiduTitleLb");
        shiduTitleLb->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        shiduTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduTitleLb, 0, 0, 1, 1);

        pm25TitleLb = new QLabel(gridLayoutWidget);
        pm25TitleLb->setObjectName("pm25TitleLb");
        pm25TitleLb->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        pm25TitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25TitleLb, 1, 0, 1, 1);

        shiduLb = new QLabel(gridLayoutWidget);
        shiduLb->setObjectName("shiduLb");
        shiduLb->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        shiduLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduLb, 0, 1, 1, 2);

        pm25Lb = new QLabel(gridLayoutWidget);
        pm25Lb->setObjectName("pm25Lb");
        pm25Lb->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        pm25Lb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25Lb, 1, 1, 1, 2);

        fangxiangLb = new QLabel(gridLayoutWidget);
        fangxiangLb->setObjectName("fangxiangLb");
        fangxiangLb->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        fangxiangLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fangxiangLb, 2, 1, 1, 2);

        fengliLb = new QLabel(gridLayoutWidget);
        fengliLb->setObjectName("fengliLb");
        fengliLb->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(0, 85, 0);"));
        fengliLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fengliLb, 3, 1, 1, 2);

        gridLayoutWidget_2 = new QWidget(leafLb);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(220, 60, 111, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cityLb = new QLabel(gridLayoutWidget_2);
        cityLb->setObjectName("cityLb");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        cityLb->setFont(font1);
        cityLb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        cityLb->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(cityLb, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("image: url(:/icons/location.ico);\n"
"background-color: rgb(60, 60, 60,0);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(leafLb);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(370, 50, 421, 351));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        low1Lb = new QLabel(gridLayoutWidget_3);
        low1Lb->setObjectName("low1Lb");
        low1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        low1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low1Lb, 10, 1, 1, 1);

        quality2Lb = new QLabel(gridLayoutWidget_3);
        quality2Lb->setObjectName("quality2Lb");
        quality2Lb->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));
        quality2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality2Lb, 2, 2, 1, 1);

        data1Lb = new QLabel(gridLayoutWidget_3);
        data1Lb->setObjectName("data1Lb");
        data1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        data1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data1Lb, 1, 1, 1, 1);

        data4Lb = new QLabel(gridLayoutWidget_3);
        data4Lb->setObjectName("data4Lb");
        data4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        data4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data4Lb, 1, 4, 1, 1);

        high3Lb = new QLabel(gridLayoutWidget_3);
        high3Lb->setObjectName("high3Lb");
        high3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        high3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high3Lb, 6, 3, 1, 1);

        week1Lb = new QLabel(gridLayoutWidget_3);
        week1Lb->setObjectName("week1Lb");
        week1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        week1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week1Lb, 0, 1, 1, 1);

        high0Lb = new QLabel(gridLayoutWidget_3);
        high0Lb->setObjectName("high0Lb");
        high0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        high0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high0Lb, 6, 0, 1, 1);

        week0Lb = new QLabel(gridLayoutWidget_3);
        week0Lb->setObjectName("week0Lb");
        week0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        week0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week0Lb, 0, 0, 1, 1);

        low3Lb = new QLabel(gridLayoutWidget_3);
        low3Lb->setObjectName("low3Lb");
        low3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        low3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low3Lb, 10, 3, 1, 1);

        high5Lb = new QLabel(gridLayoutWidget_3);
        high5Lb->setObjectName("high5Lb");
        high5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        high5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high5Lb, 6, 5, 1, 1);

        type2Lb = new QLabel(gridLayoutWidget_3);
        type2Lb->setObjectName("type2Lb");
        type2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        type2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type2Lb, 3, 2, 1, 1);

        quality1Lb = new QLabel(gridLayoutWidget_3);
        quality1Lb->setObjectName("quality1Lb");
        quality1Lb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        quality1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality1Lb, 2, 1, 1, 1);

        week2Lb = new QLabel(gridLayoutWidget_3);
        week2Lb->setObjectName("week2Lb");
        week2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        week2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week2Lb, 0, 2, 1, 1);

        type3Lb = new QLabel(gridLayoutWidget_3);
        type3Lb->setObjectName("type3Lb");
        type3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        type3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type3Lb, 3, 3, 1, 1);

        high1Lb = new QLabel(gridLayoutWidget_3);
        high1Lb->setObjectName("high1Lb");
        high1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        high1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high1Lb, 6, 1, 1, 1);

        quality0Lb = new QLabel(gridLayoutWidget_3);
        quality0Lb->setObjectName("quality0Lb");
        quality0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        quality0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality0Lb, 2, 0, 1, 1);

        type0Lb = new QLabel(gridLayoutWidget_3);
        type0Lb->setObjectName("type0Lb");
        type0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        type0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type0Lb, 3, 0, 1, 1);

        low0Lb = new QLabel(gridLayoutWidget_3);
        low0Lb->setObjectName("low0Lb");
        low0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        low0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low0Lb, 10, 0, 1, 1);

        low5Lb = new QLabel(gridLayoutWidget_3);
        low5Lb->setObjectName("low5Lb");
        low5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        low5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low5Lb, 10, 5, 1, 1);

        quality5Lb = new QLabel(gridLayoutWidget_3);
        quality5Lb->setObjectName("quality5Lb");
        quality5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        quality5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality5Lb, 2, 5, 1, 1);

        type5Lb = new QLabel(gridLayoutWidget_3);
        type5Lb->setObjectName("type5Lb");
        type5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        type5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type5Lb, 3, 5, 1, 1);

        high2Lb = new QLabel(gridLayoutWidget_3);
        high2Lb->setObjectName("high2Lb");
        high2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        high2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high2Lb, 6, 2, 1, 1);

        low2Lb = new QLabel(gridLayoutWidget_3);
        low2Lb->setObjectName("low2Lb");
        low2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        low2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low2Lb, 10, 2, 1, 1);

        week4Lb = new QLabel(gridLayoutWidget_3);
        week4Lb->setObjectName("week4Lb");
        week4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        week4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week4Lb, 0, 4, 1, 1);

        type1Lb = new QLabel(gridLayoutWidget_3);
        type1Lb->setObjectName("type1Lb");
        type1Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        type1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type1Lb, 3, 1, 1, 1);

        data2Lb = new QLabel(gridLayoutWidget_3);
        data2Lb->setObjectName("data2Lb");
        data2Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        data2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data2Lb, 1, 2, 1, 1);

        week5Lb = new QLabel(gridLayoutWidget_3);
        week5Lb->setObjectName("week5Lb");
        week5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        week5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week5Lb, 0, 5, 1, 1);

        data3Lb = new QLabel(gridLayoutWidget_3);
        data3Lb->setObjectName("data3Lb");
        data3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        data3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data3Lb, 1, 3, 1, 1);

        type4Lb = new QLabel(gridLayoutWidget_3);
        type4Lb->setObjectName("type4Lb");
        type4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        type4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type4Lb, 3, 4, 1, 1);

        quality3Lb = new QLabel(gridLayoutWidget_3);
        quality3Lb->setObjectName("quality3Lb");
        quality3Lb->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        quality3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality3Lb, 2, 3, 1, 1);

        high4Lb = new QLabel(gridLayoutWidget_3);
        high4Lb->setObjectName("high4Lb");
        high4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        high4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high4Lb, 6, 4, 1, 1);

        curveLb = new QLabel(gridLayoutWidget_3);
        curveLb->setObjectName("curveLb");
        curveLb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(curveLb, 7, 0, 3, 6);

        lquality4Lb = new QLabel(gridLayoutWidget_3);
        lquality4Lb->setObjectName("lquality4Lb");
        lquality4Lb->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        lquality4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lquality4Lb, 2, 4, 1, 1);

        data0Lb = new QLabel(gridLayoutWidget_3);
        data0Lb->setObjectName("data0Lb");
        data0Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        data0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data0Lb, 1, 0, 1, 1);

        week3Lb = new QLabel(gridLayoutWidget_3);
        week3Lb->setObjectName("week3Lb");
        week3Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        week3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week3Lb, 0, 3, 1, 1);

        low4Lb = new QLabel(gridLayoutWidget_3);
        low4Lb->setObjectName("low4Lb");
        low4Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        low4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low4Lb, 10, 4, 1, 1);

        data5Lb = new QLabel(gridLayoutWidget_3);
        data5Lb->setObjectName("data5Lb");
        data5Lb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        data5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data5Lb, 1, 5, 1, 1);

        typelco5Lb = new QLabel(gridLayoutWidget_3);
        typelco5Lb->setObjectName("typelco5Lb");
        typelco5Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/baoxue.png);"));

        gridLayout_3->addWidget(typelco5Lb, 4, 5, 2, 1);

        typelco4Lb = new QLabel(gridLayoutWidget_3);
        typelco4Lb->setObjectName("typelco4Lb");
        typelco4Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/baoxue.png);"));

        gridLayout_3->addWidget(typelco4Lb, 4, 4, 2, 1);

        typelco3Lb = new QLabel(gridLayoutWidget_3);
        typelco3Lb->setObjectName("typelco3Lb");
        typelco3Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/baoxue.png);"));

        gridLayout_3->addWidget(typelco3Lb, 4, 3, 2, 1);

        typelco2Lb = new QLabel(gridLayoutWidget_3);
        typelco2Lb->setObjectName("typelco2Lb");
        typelco2Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/baoxue.png);"));

        gridLayout_3->addWidget(typelco2Lb, 4, 2, 2, 1);

        typelco0Lb = new QLabel(gridLayoutWidget_3);
        typelco0Lb->setObjectName("typelco0Lb");
        typelco0Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/baoxue.png);"));
        typelco0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typelco0Lb, 4, 0, 2, 1);

        typelco1Lb = new QLabel(gridLayoutWidget_3);
        typelco1Lb->setObjectName("typelco1Lb");
        typelco1Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/baoxue.png);"));

        gridLayout_3->addWidget(typelco1Lb, 4, 1, 2, 1);

        label_2 = new QLabel(leafLb);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(18, 58, 20, 20));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/leaf.ico);\n"
"background-color: rgba(255, 255, 255, 0);"));
        qualityLb = new QLabel(leafLb);
        qualityLb->setObjectName("qualityLb");
        qualityLb->setGeometry(QRect(38, 58, 56, 20));
        qualityLb->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 85, 0);"));
        temLb = new QLabel(leafLb);
        temLb->setObjectName("temLb");
        temLb->setGeometry(QRect(10, 50, 241, 101));
        temLb->setStyleSheet(QString::fromUtf8("font: 50pt \"Arial\";\n"
"color: rgb(0, 85, 0);"));
        temLb->setAlignment(Qt::AlignCenter);
        typeLb = new QLabel(leafLb);
        typeLb->setObjectName("typeLb");
        typeLb->setGeometry(QRect(140, 120, 101, 31));
        typeLb->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"background-color: rgba(60, 60, 60, 0);"));
        typeLb->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(leafLb);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 340, 75, 23));
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 3, 20));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        dataLb->setText(QCoreApplication::translate("MainWindow", "2024-1-29", nullptr));
        titleLb->setText(QCoreApplication::translate("MainWindow", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
        fengxiangTitleLb->setText(QCoreApplication::translate("MainWindow", "\351\243\216\345\220\221", nullptr));
        fengliTitleLb->setText(QCoreApplication::translate("MainWindow", "\351\243\216\345\212\233", nullptr));
        shiduTitleLb->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        pm25TitleLb->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        shiduLb->setText(QCoreApplication::translate("MainWindow", "95%", nullptr));
        pm25Lb->setText(QCoreApplication::translate("MainWindow", "0l", nullptr));
        fangxiangLb->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        fengliLb->setText(QCoreApplication::translate("MainWindow", "<3\347\272\247", nullptr));
        cityLb->setText(QCoreApplication::translate("MainWindow", "\351\225\277\346\262\231", nullptr));
        low1Lb->setText(QCoreApplication::translate("MainWindow", "-1\302\260", nullptr));
        quality2Lb->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246\346\261\241\346\237\223", nullptr));
        data1Lb->setText(QCoreApplication::translate("MainWindow", "02/02", nullptr));
        data4Lb->setText(QCoreApplication::translate("MainWindow", "05/05", nullptr));
        high3Lb->setText(QCoreApplication::translate("MainWindow", "10\302\260", nullptr));
        week1Lb->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        high0Lb->setText(QCoreApplication::translate("MainWindow", "10\302\260", nullptr));
        week0Lb->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        low3Lb->setText(QCoreApplication::translate("MainWindow", "-1\302\260", nullptr));
        high5Lb->setText(QCoreApplication::translate("MainWindow", "10\302\260", nullptr));
        type2Lb->setText(QCoreApplication::translate("MainWindow", "\351\230\264", nullptr));
        quality1Lb->setText(QCoreApplication::translate("MainWindow", "\350\211\257\345\245\275", nullptr));
        week2Lb->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        type3Lb->setText(QCoreApplication::translate("MainWindow", "\351\230\264", nullptr));
        high1Lb->setText(QCoreApplication::translate("MainWindow", "10\302\260", nullptr));
        quality0Lb->setText(QCoreApplication::translate("MainWindow", "\344\274\230\350\264\250", nullptr));
        type0Lb->setText(QCoreApplication::translate("MainWindow", "\351\230\264", nullptr));
        low0Lb->setText(QCoreApplication::translate("MainWindow", "-1\302\260", nullptr));
        low5Lb->setText(QCoreApplication::translate("MainWindow", "-1\302\260", nullptr));
        quality5Lb->setText(QCoreApplication::translate("MainWindow", "\350\211\257\345\245\275", nullptr));
        type5Lb->setText(QCoreApplication::translate("MainWindow", "\351\230\264", nullptr));
        high2Lb->setText(QCoreApplication::translate("MainWindow", "10\302\260", nullptr));
        low2Lb->setText(QCoreApplication::translate("MainWindow", "-1\302\260", nullptr));
        week4Lb->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        type1Lb->setText(QCoreApplication::translate("MainWindow", "\351\230\264", nullptr));
        data2Lb->setText(QCoreApplication::translate("MainWindow", "03/03", nullptr));
        week5Lb->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        data3Lb->setText(QCoreApplication::translate("MainWindow", "04/04", nullptr));
        type4Lb->setText(QCoreApplication::translate("MainWindow", "\351\230\264", nullptr));
        quality3Lb->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\272\246\346\261\241\346\237\223", nullptr));
        high4Lb->setText(QCoreApplication::translate("MainWindow", "10\302\260", nullptr));
        lquality4Lb->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215\346\261\241\346\237\223", nullptr));
        data0Lb->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        week3Lb->setText(QCoreApplication::translate("MainWindow", "\345\220\216\345\244\251", nullptr));
        low4Lb->setText(QCoreApplication::translate("MainWindow", "-1\302\260", nullptr));
        data5Lb->setText(QCoreApplication::translate("MainWindow", "06/06", nullptr));
        qualityLb->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        temLb->setText(QCoreApplication::translate("MainWindow", "9\302\260", nullptr));
        typeLb->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
