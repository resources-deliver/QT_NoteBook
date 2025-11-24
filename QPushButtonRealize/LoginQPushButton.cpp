#include "../login.h"

// 实现：登录窗口类接受登录
void Login::acceptedLogin(){
    QString user = LoginUi->UserNameLineEdit->text().trimmed();
    QString pswd = LoginUi->PasswardLineEdit->text().trimmed();
    QString encrptPSWD = encrypt(pswd);
    if (user == userName && encrptPSWD == passWard){
        writeSettings();    //保存设置
        this->accept();
    }
    else{
        if (user == "" || encrptPSWD == ""){
            tipswindows->errorTipsWindow(this, tr("错误提示"), tr("用户名或密码为空"));
            LoginUi->UserNameLineEdit->clear();
            LoginUi->PasswardLineEdit->clear();
        }
        else if(user == userName && encrptPSWD != passWard){
            tipswindows->errorTipsWindow(this, tr("错误提示"), tr("用户名或密码不正确"));
            LoginUi->PasswardLineEdit->clear();
        }
    }
}

// 实现：登录窗口类取消登录
void Login::cancelLogin(){
    this->reject();
}
