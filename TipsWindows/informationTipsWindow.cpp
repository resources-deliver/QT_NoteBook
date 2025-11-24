#include "../tipswindows.h"

// 窗口函数: 信息提示消息窗口
void TipsWindows::informationTipsWindow(QWidget *parent, QString text){   // 窗口函数: 信息提示窗口
    QMessageBox tips(parent);  // 设置消息提示窗口,绑定主窗口
    tips.setWindowTitle(tr("信息提示"));  // 设置消息提示窗口标题
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
    tips.setIcon(QMessageBox::Information);  // 设置消息提示窗口主体内容旁信息图标
    tips.setStandardButtons(QMessageBox::Yes);  // 设置消息提示窗口标准的确定按钮
    tips.setDefaultButton(QMessageBox::Yes);  // 设置消息提示窗口默认选择的标准按钮
    tips.exec();  // 设置打开消息提示窗口
}
