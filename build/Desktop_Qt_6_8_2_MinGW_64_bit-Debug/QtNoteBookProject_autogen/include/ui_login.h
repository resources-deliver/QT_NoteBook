/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *LoginLabel;
    QHBoxLayout *UserNameLayout;
    QLabel *UserNameLabel;
    QSpacerItem *UserNameSpacer;
    QLineEdit *UserNameLineEdit;
    QHBoxLayout *PasswardLayout;
    QLabel *PasswardLabel;
    QSpacerItem *PasswardSpacer;
    QLineEdit *PasswardLineEdit;
    QCheckBox *RememberCheckBox;
    QHBoxLayout *PushButtonLayout;
    QPushButton *AcceptPushButton;
    QSpacerItem *PushButtonSpacer;
    QPushButton *CancelPushButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(678, 410);
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(210, 50, 251, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LoginLabel = new QLabel(layoutWidget);
        LoginLabel->setObjectName("LoginLabel");

        verticalLayout->addWidget(LoginLabel);

        UserNameLayout = new QHBoxLayout();
        UserNameLayout->setObjectName("UserNameLayout");
        UserNameLabel = new QLabel(layoutWidget);
        UserNameLabel->setObjectName("UserNameLabel");

        UserNameLayout->addWidget(UserNameLabel);

        UserNameSpacer = new QSpacerItem(17, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        UserNameLayout->addItem(UserNameSpacer);

        UserNameLineEdit = new QLineEdit(layoutWidget);
        UserNameLineEdit->setObjectName("UserNameLineEdit");

        UserNameLayout->addWidget(UserNameLineEdit);


        verticalLayout->addLayout(UserNameLayout);

        PasswardLayout = new QHBoxLayout();
        PasswardLayout->setObjectName("PasswardLayout");
        PasswardLabel = new QLabel(layoutWidget);
        PasswardLabel->setObjectName("PasswardLabel");

        PasswardLayout->addWidget(PasswardLabel);

        PasswardSpacer = new QSpacerItem(48, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        PasswardLayout->addItem(PasswardSpacer);

        PasswardLineEdit = new QLineEdit(layoutWidget);
        PasswardLineEdit->setObjectName("PasswardLineEdit");

        PasswardLayout->addWidget(PasswardLineEdit);


        verticalLayout->addLayout(PasswardLayout);

        RememberCheckBox = new QCheckBox(layoutWidget);
        RememberCheckBox->setObjectName("RememberCheckBox");

        verticalLayout->addWidget(RememberCheckBox);

        PushButtonLayout = new QHBoxLayout();
        PushButtonLayout->setObjectName("PushButtonLayout");
        AcceptPushButton = new QPushButton(layoutWidget);
        AcceptPushButton->setObjectName("AcceptPushButton");

        PushButtonLayout->addWidget(AcceptPushButton);

        PushButtonSpacer = new QSpacerItem(58, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        PushButtonLayout->addItem(PushButtonSpacer);

        CancelPushButton = new QPushButton(layoutWidget);
        CancelPushButton->setObjectName("CancelPushButton");

        PushButtonLayout->addWidget(CancelPushButton);


        verticalLayout->addLayout(PushButtonLayout);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        LoginLabel->setText(QCoreApplication::translate("Login", "\347\231\273     \345\275\225", nullptr));
        UserNameLabel->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        PasswardLabel->setText(QCoreApplication::translate("Login", "\345\257\206   \347\240\201", nullptr));
        RememberCheckBox->setText(QCoreApplication::translate("Login", "CheckBox", nullptr));
        AcceptPushButton->setText(QCoreApplication::translate("Login", "PushButton", nullptr));
        CancelPushButton->setText(QCoreApplication::translate("Login", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
