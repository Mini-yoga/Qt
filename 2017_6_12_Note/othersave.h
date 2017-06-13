#ifndef OTHERSAVE_H
#define OTHERSAVE_H

#include <QWidget>

namespace Ui {
class otherSave;
}

class otherSave : public QWidget
{
    Q_OBJECT

public:
    explicit otherSave(QWidget *parent = 0);
    ~otherSave();

private slots:
    void on_saveButton_clicked();

signals:
    void sendNameData(QString);

private:
    Ui::otherSave *ui;
};

#endif // OTHERSAVE_H
