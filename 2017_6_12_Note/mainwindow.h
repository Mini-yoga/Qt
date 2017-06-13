#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_listView_receivedData(QString string);
    void on_listView_receivedNameData(QString string);
    void on_save_clicked();
    void on_otherSave_clicked();
    void on_Delete_clicked();

private:
    Ui::MainWindow *ui;
    QString filePath;
    QString fileName;
    void loadFile();
};
#endif // MAINWINDOW_H
