#include "../login.h"

// 实现：登录窗口类代码化ui设计
void Login::setUi(){
    this->setFixedSize(680, 410);  // 设置当前窗口(登录窗口)固定大小
    this->setWindowFlags(Qt::FramelessWindowHint);  // 设置当前窗口(登录窗口)为一个无边框窗口
    this->setAttribute(Qt::WA_DeleteOnClose);  // 设置当前窗口(登录窗口)在窗口关闭时自动删除其内存

    LoginUi->AcceptPushButton->setMinimumSize(100, 30);
    LoginUi->AcceptPushButton->setToolTip("登录应用程序");
    LoginUi->AcceptPushButton->setText("登录");
    LoginUi->AcceptPushButton->setIcon(QIcon(":/Pictures/Images/tipsWindowPng.jpg"));
    LoginUi->AcceptPushButton->setDefault(true);
    LoginUi->AcceptPushButton->setFlat(true);
    LoginUi->AcceptPushButton->setStyleSheet(
        R"(
            QPushButton {
                background-color: none;  /* 背景色 */
                padding: 5px;
            }
            QPushButton:hover {
                background-color: red;  /* 鼠标悬浮时颜色(红色) */
            }
            QPushButton:pressed {
                background-color: white;  /* 鼠标按下时(白色) */
            }
        )"
    );

    LoginUi->CancelPushButton->setMinimumSize(100, 30);
    LoginUi->CancelPushButton->setToolTip("取消登录应用程序");
    LoginUi->CancelPushButton->setText("取消");
    LoginUi->CancelPushButton->setIcon(QIcon(":/Pictures/Images/132.bmp"));
    LoginUi->CancelPushButton->setFlat(true);
    LoginUi->CancelPushButton->setStyleSheet(
        R"(
            QPushButton {
                background-color: none;  /* 背景色 */
                padding: 5px;
            }
            QPushButton:hover {
                background-color: blue;  /* 鼠标悬浮时颜色(蓝色) */
            }
            QPushButton:pressed {
                background-color: white;  /* 鼠标按下时(白色) */
            }
        )"
    );

    LoginUi->UserNameLineEdit->setMinimumSize(165, 30);
    LoginUi->PasswardLineEdit->setMinimumSize(165, 30);
    LoginUi->PasswardLineEdit->setEchoMode(QLineEdit::Password);  // 设置回显密码模式

    LoginUi->UserNameLabel->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    QFont userNameLabelFont = LoginUi->UserNameLabel->font();
    userNameLabelFont.setPointSize(11);
    userNameLabelFont.setBold(true);
    LoginUi->UserNameLabel->setFont(userNameLabelFont);

    LoginUi->PasswardLabel->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    QFont passWardLabelFont = LoginUi->PasswardLabel->font();
    passWardLabelFont.setPointSize(11);
    passWardLabelFont.setBold(true);
    LoginUi->PasswardLabel->setFont(passWardLabelFont);

    LoginUi->LoginLabel->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    QFont loginLabelFont = LoginUi->LoginLabel->font();
    loginLabelFont.setPointSize(14);
    loginLabelFont.setBold(true);
    LoginUi->LoginLabel->setFont(loginLabelFont);

    LoginUi->RememberCheckBox->setText("记住用户名");
    QFont rememberCheckBoxFont = LoginUi->RememberCheckBox->font();
    rememberCheckBoxFont.setPointSize(11);
    rememberCheckBoxFont.setBold(true);
    LoginUi->RememberCheckBox->setFont(rememberCheckBoxFont);
}
