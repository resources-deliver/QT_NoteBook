#include "../tipswindows.h"

// 窗口函数: 写入方式选择窗口
writeStruct TipsWindows::writeWayTipsWindow(QWidget *parent){
    QMessageBox tips(parent);  // 设置写入方式选择窗口,绑定主窗口
    tips.setWindowTitle(tr("写入提示"));  // 设置写入方式选择窗口标题
    tips.setWindowIcon(QIcon(":/Pictures/Images/tipsWindowPng.jpg"));  // 设置写入方式选择窗口标题旁的图标
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
    );  // 设置写入方式选择窗口文本样式表
    tips.setText(tr("请选择写入方式"));  // 设置写入方式选择窗口主体内容
    tips.setIcon(QMessageBox::NoIcon);  // 设置写入方式选择窗口主体内容旁无图标(可不设置)
    tips.setInformativeText("QByteArray为二进制写入方式\nQString为文本写入方式");  // 设置写入方式选择窗口副内容
    QPushButton *btn1 = new QPushButton("QByteArray", &tips);  // 定义自定义按钮1,绑定父窗口
    QPushButton *btn2 = new QPushButton("QString", &tips);  // 定义自定义按钮2,绑定父窗口
    QPushButton *btn3 = new QPushButton("Cancel", &tips);  // 定义自定义按钮3,绑定父窗口
    tips.addButton(btn1, QMessageBox::ActionRole);  // 设置写入方式选择窗口添加自定义按钮1
    tips.addButton(btn2, QMessageBox::ActionRole);  // 设置写入方式选择窗口添加自定义按钮2
    tips.addButton(btn3, QMessageBox::ActionRole);  // 设置写入方式选择窗口添加自定义按钮3
    tips.setEscapeButton(btn3);  // 设置写入方式选择窗口Esc键选择的自定义按钮
    tips.setDefaultButton(btn2);  // 设置写入方式选择窗口默认选择的自定义按钮
    QCheckBox *dontAskAgain = new QCheckBox("不再询问", &tips);  // 定义写入方式选择窗口自定义复选框,绑定父窗口
    tips.setCheckBox(dontAskAgain);  // 设置写入方式选择窗口添加自定义复选框
    tips.exec();  // 打开写入方式选择窗口
    writeStruct returnWay;  // 定义写入方式选择返回的结构体对象
    if(dontAskAgain->isChecked())  // 如果自定义复选框被勾选
        returnWay.checkBoxReturn = QString("dontShowAgain");  // 返回约定的"dontShowAgain"
    if(tips.clickedButton() == btn1){  // 如果自定义按钮1被点击
        returnWay.pushButtonReturn = 1;  // 表明选择了"QByteArray",返回1
        return returnWay;
    }
    else if(tips.clickedButton() == btn2){  // 如果自定义按钮2被点击
        returnWay.pushButtonReturn = 2;  // 表明选择了"QString",返回1
        return returnWay;
    }
    else{  // 如果自定义按钮3被点击
        returnWay.pushButtonReturn = 0;  // 表明选择了"Cancel",返回0
        return returnWay;
    }
}
