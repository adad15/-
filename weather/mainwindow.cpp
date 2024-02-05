#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置窗口属性，为没有边框的窗口
    setWindowFlag(Qt::FramelessWindowHint);
    //固定大小
    setFixedSize(width(),height());
    exitMenu = new QMenu(this);
    exitAct = new QAction;
    exitAct->setText("退出");
    exitAct->setIcon(QIcon(":/icons/close"));
    exitMenu->addAction(exitAct);
    connect(exitAct,SIGNAL(triggered(bool)),this,SLOT(slot_exitApp()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    exitMenu->exec(QCursor::pos());
    event->accept();
}

void MainWindow::slot_exitApp()
{
    qApp->exit(0);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    //这里event->globalPos()-mPos得到的是窗口移动后的新位置。
    move(event->globalPos()-mPos);
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    mPos = event->globalPos()-this->pos();
}
