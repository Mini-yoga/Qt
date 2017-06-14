/********************************************************************************
** Form generated from reading UI file 'sonwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONWINDOW_H
#define UI_SONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sonWindow
{
public:

    void setupUi(QWidget *sonWindow)
    {
        if (sonWindow->objectName().isEmpty())
            sonWindow->setObjectName(QStringLiteral("sonWindow"));
        sonWindow->resize(513, 500);
        sonWindow->setMinimumSize(QSize(500, 500));

        retranslateUi(sonWindow);

        QMetaObject::connectSlotsByName(sonWindow);
    } // setupUi

    void retranslateUi(QWidget *sonWindow)
    {
        sonWindow->setWindowTitle(QApplication::translate("sonWindow", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sonWindow: public Ui_sonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONWINDOW_H
