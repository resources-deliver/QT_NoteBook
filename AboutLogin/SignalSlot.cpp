#include "../login.h"

// 实现：登录窗口类ui的信号与槽连接
void Login::uiSignalSlot(){
    connect(LoginUi->AcceptPushButton, &QPushButton::clicked, this, &Login::acceptedLogin);
    connect(LoginUi->CancelPushButton, &QPushButton::clicked, this, &Login::cancelLogin);
}
