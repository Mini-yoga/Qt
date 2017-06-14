/********************************************************************************
** Form generated from reading UI file 'othersave.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERSAVE_H
#define UI_OTHERSAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_otherSave
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fileNameEdit;
    QPushButton *saveButton;

    void setupUi(QWidget *otherSave)
    {
        if (otherSave->objectName().isEmpty())
            otherSave->setObjectName(QStringLiteral("otherSave"));
        otherSave->resize(362, 136);
        widget = new QWidget(otherSave);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 30, 311, 61));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        fileNameEdit = new QLineEdit(widget);
        fileNameEdit->setObjectName(QStringLiteral("fileNameEdit"));

        horizontalLayout->addWidget(fileNameEdit);


        verticalLayout->addLayout(horizontalLayout);

        saveButton = new QPushButton(widget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        verticalLayout->addWidget(saveButton);


        retranslateUi(otherSave);

        QMetaObject::connectSlotsByName(otherSave);
    } // setupUi

    void retranslateUi(QWidget *otherSave)
    {
        otherSave->setWindowTitle(QApplication::translate("otherSave", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("otherSave", "File Name:", Q_NULLPTR));
        saveButton->setText(QApplication::translate("otherSave", "save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class otherSave: public Ui_otherSave {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERSAVE_H
