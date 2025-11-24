#include "../tipswindows.h"

// 窗口函数: 错误提示消息窗口
void TipsWindows::errorTipsWindow(QWidget *parent, QString title, QString text){
    QMessageBox tips(parent);  // 设置消息提示窗口,绑定主窗口
    tips.setWindowTitle(title);  // 设置消息提示窗口标题
    tips.setWindowIcon(QIcon(":/Pictures/Images/tipsWindowPng.jpg"));  // 设置消息提示窗口标题旁的图标
    tips.setStyleSheet(
        "QMessageBox QLabel {"
        "   color: #333333;"
        "   font-family: 'Arial';"
        "   font-size: 14px;"
        "   line-height: 1.5;"
        "}"
        "QMessageBox {"
        "   background-color: #f8f8f8;"
        "}"
    );  // 设置消息提示窗口文本样式表
    tips.setText(text);  // 设置消息提示窗口主体内容
    tips.setIcon(QMessageBox::Critical);  // 设置消息提示窗口主体内容旁错误图标
    tips.setStandardButtons(QMessageBox::Ok);  // 设置消息提示窗口标准的Ok按钮
    tips.setDefaultButton(QMessageBox::Ok);  // 设置消息提示窗口默认选择的标准按钮
    tips.exec();  // 设置打开消息提示窗口
}
