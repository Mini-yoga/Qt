#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sonwindow.h"
#include "othersave.h"
#include <QFile>
#include <QDirIterator>
#include <QDebug>
#include <QString>
#include <QTextStream>
#include <QDir>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

//    QDirIterator dirIterator("/Users/MiniYoga/Documents/QT/Qt/2017_6_12_Note/text/",QDirIterator::Subdirectories);
//    QStringList fileList;
//    while (dirIterator.hasNext()) {
//        dirIterator.next();
//        QFileInfo Info = dirIterator.fileInfo();
//        if(Info.isFile()){
//            //qDebug()<<dirIterator.fileName();
//            fileList.append(dirIterator.path()+dirIterator.fileName());
//        }

//    }
//    sonWindow *fileQw = new sonWindow();
//    fileQw->listWindow(fileList);
//    fileQw->show();
//    connect(fileQw, SIGNAL(sendData(QString)),this, SLOT(on_listView_receivedData(QString)));

    QFileDialog *fileDialog = new QFileDialog(this);
    QString path = fileDialog->getOpenFileName(this, tr("Open File"),
                                "/",
                                tr("Text files (*.txt)"));
    on_listView_receivedData(path);
}


void MainWindow::on_listView_receivedData(QString string){
    ui->lineEdit->setText(string);
    this->filePath = string;
    loadFile();
}
void MainWindow::loadFile(){
    QFile file(this->filePath);
    if(file.open(QIODevice::ReadOnly)){
        QTextStream textStream(&file);
        QString text = textStream.readAll();
        ui->textEdit->setText(text);

        file.close();
    }
    else{
        qDebug()<<"Can not open file!"<<endl;
    }

}

void MainWindow::on_otherSave_clicked()
{
//    otherSave *os = new otherSave();
//    os->show();
//    connect(os,SIGNAL(sendNameData(QString)),this, SLOT(on_listView_receivedNameData(QString)));
    QFileDialog *fileDialog = new QFileDialog(this);
    QString path = fileDialog->getSaveFileName(this, tr("Save File"),
                                QDir::currentPath(),
                                tr("Text files (*.txt);;XML files (*.xml)"));
    on_listView_receivedNameData(path);
}

void MainWindow::on_listView_receivedNameData(QString string){
    //this->fileName = "/Users/MiniYoga/Documents/QT/Qt/2017_6_12_Note/text/"+string+".txt";

    QFile file(string);
    file.open(QIODevice::WriteOnly);
    file.close();
    if(file.open(QIODevice::WriteOnly|QIODevice::Text)){
        QTextStream outStream(&file);
        outStream<<ui->textEdit->toPlainText()<<endl;
        file.close();
    }
    else{
        qDebug()<<"Can not open file!"<<endl;
    }
}

void MainWindow::on_Delete_clicked()
{
    QFile file;
    file.remove(ui->lineEdit->text());
    ui->lineEdit->setText("");
    ui->textEdit->setText("");
}

void MainWindow::on_save_clicked()
{
    QFile file(this->filePath);
    if(file.open(QIODevice::WriteOnly|QIODevice::Text)){
        QTextStream outStream(&file);
        outStream<<ui->textEdit->toPlainText()<<endl;
        file.close();
    }
    else{
        qDebug()<<"Can not open file!"<<endl;
    }
}
