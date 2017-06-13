#include "othersave.h"
#include "ui_othersave.h"

otherSave::otherSave(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::otherSave)
{
    ui->setupUi(this);
}

otherSave::~otherSave()
{
    delete ui;
}
void otherSave::on_saveButton_clicked()
{
    QString nameString = ui->fileNameEdit->text();
    emit sendNameData(nameString);
    this->close();
}
