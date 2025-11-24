#include "../login.h"

// 实现：登录窗口类构造函数
Login::Login(QWidget *parent):QDialog(parent),LoginUi(new Ui::Login){
    LoginUi->setupUi(this);
    tipswindows = new TipsWindows(this);
    setUi();
    uiSignalSlot();
    QApplication::setOrganizationName("QT记事本");  // 设置当前应用程序(登录窗口)组织名称
    QApplication::setApplicationName("登录");  // 设置当前应用程序(登录窗口)名称
    readSettings();
}

// 实现：登录窗口类析构函数
Login::~Login(){
    delete LoginUi;
}

// 实现：登录窗口类读取设置
void Login::readSettings(){
    QSettings settings;
    bool saved = settings.value("saved", false).toBool();
    userName = settings.value("Username", "user").toString();
    QString defaultPSWD = encrypt("user");
    passWard = settings.value("PSWD", defaultPSWD).toString();
    if (saved)
        LoginUi->UserNameLineEdit->setText(userName);
    LoginUi->RememberCheckBox->setChecked(saved);
}

// 实现：登录窗口类写入设置
void Login::writeSettings(){
    QSettings settings;
    settings.setValue("Username", userName);
    settings.setValue("PSWD", passWard);
    settings.setValue("saved", LoginUi->RememberCheckBox->isChecked());
}

// 实现：登录窗口类加密
QString Login::encrypt(const QString &str){
    QByteArray btArray = str.toLocal8Bit();  // 将QString类型转换为QByteArray类型
    QCryptographicHash hash(QCryptographicHash::Md5);  // 定义QCryptographicHash类对象，并指定使用MD5算法
    hash.addData(btArray);  // 将要计算哈希的数据添加到QCryptographicHash对象中
    QByteArray resultArray = hash.result();  //  获取哈希计算的结果
    QString md5 = resultArray.toHex();  // 将二进制的哈希结果转换为十六进制表示的字符串
    return md5;
}
