#include "sonwindow.h"
#include "ui_sonwindow.h"
#include "QListWidget"
#include"QLabel"
#include"QLayout"
#include"QDebug"
#include <QCloseEvent>

sonWindow::sonWindow(QWidget *mainwindow) :
    QWidget(mainwindow),
    ui(new Ui::sonWindow)
{
    ui->setupUi(this);
}

sonWindow::~sonWindow()
{
    delete ui;
}

void sonWindow::listWindow(QStringList list){
    this->listString = list;
    QLabel *label = new QLabel(this);
    QListWidget *listWidget = new QListWidget(this);
    QVBoxLayout *VLayout = new QVBoxLayout;
    label->setText("PathList:");
    listWidget->addItems(list);
    VLayout->addWidget(label);
    VLayout->addWidget(listWidget);
    this->setLayout(VLayout);
    connect(listWidget, SIGNAL(doubleClicked(QModelIndex)),this, SLOT(on_listView_doubleClicked(const QModelIndex)));
}

void sonWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    int i = index.row();
    string = listString.at(i);
    qDebug()<<string<<i<<index;
    this->close();
}

void sonWindow::closeEvent(QCloseEvent *event)
{
    emit sendData(this->string);
}
