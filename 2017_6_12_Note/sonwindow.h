#ifndef SONWINDOW_H
#define SONWINDOW_H

#include <QWidget>
#include <QCloseEvent>

namespace Ui {
class sonWindow;
}

class sonWindow : public QWidget
{
    Q_OBJECT

public:
    explicit sonWindow(QWidget *parent = 0);
    void listWindow(QStringList list);
    void closeEvent(QCloseEvent *event);
    ~sonWindow();

signals:
    void sendData(QString);
private slots:
    void on_listView_doubleClicked(const QModelIndex &index);

private:
    Ui::sonWindow *ui;
    QStringList listString;
    QString string;
};

#endif // SONWINDOW_H
