#ifndef TIPSWINDOWS_H
#define TIPSWINDOWS_H
// 提示窗口头文件管理

#include "headerFiles.h"  // 引用项目头文件管理基地

// 写入方式返回结构体
struct writeStruct{
    QString checkBoxReturn;
    int pushButtonReturn;
};

// 读取方式返回结构体
struct readStruct{
    QString checkBoxReturn;
    int pushButtonReturn;
};

// 运行次数返回结构体
struct runTimesStruct{
    bool writeRunTimes = true;
    bool readRunTims = true;
};

// 继承于QWidget类的TipsWindows提示窗口类
class TipsWindows : public QWidget{
    Q_OBJECT

public:
    explicit TipsWindows(QWidget *parent = nullptr);  // 构造函数
    QString openWindow(QString title, QString choicetipstext, QString choicetipsbutton);  // 用于实现选择文件窗口函数
    QStringList openWindows(QString title, QString choicetipstext, QString choicetipsbutton);  // 用于实现选择多个文件窗口函数
    QString saveWindow(QString title, QString choicetipstext, QString choicetipsbutton);  // 用于实现新建文件窗口函数
    void errorTipsWindow(QWidget *parent, QString title, QString text);  // 用于实现错误提示窗口函数
    void informationTipsWindow(QWidget *parent, QString text);  // 用于实现信息提示窗口函数
    writeStruct writeWayTipsWindow(QWidget *parent);  // 用于实现写入方式选择提示窗口函数
    readStruct readWayTipsWindow(QWidget *parent);  // 用于实现读取方式选择提示窗口函数

signals:
};
#endif // TIPSWINDOWS_H
