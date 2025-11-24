#ifndef LOGIN_H
#define LOGIN_H
// 登录窗口头文件管理

#include "headerFiles.h"  // 引用项目头文件管理基地
#include "tipswindows.h"  // 引用提示窗口头文件管理

// 命名空间Ui
namespace Ui {class Login;}

// 继承于QDialog类的Login登录窗口类
class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);  // 构造函数
    ~Login();  // 析构函数

private:
    void setUi();  // 用来实现代码化ui设计函数
    void uiSignalSlot();  // 用来实现ui的信号与槽连接函数

private:
    TipsWindows *tipswindows;  // 自定义TipsWindows类，定义类指针对象调用该类公有成员

private:
    bool m_moving = false;  // 表示窗口是否在鼠标操作下移动
    QPoint m_lastPos;  // 上一次的鼠标位置
    QString userName = "yang";
    QString passWard = "12345";
    void readSettings();  // 用来实现读取设置,从注册表
    void writeSettings();  // 用来实现写入设置，从注册表
    QString encrypt(const QString& str);  // 用来实现字符串加密

protected:
    void mousePressEvent(QMouseEvent *event);  // 用来实现鼠标按压事件函数
    void mouseMoveEvent(QMouseEvent *event);  // 用来实现鼠标移动事件函数
    void mouseReleaseEvent(QMouseEvent *event);  // 用来实现鼠标释放事件函数
    void paintEvent(QPaintEvent *event);  // 用来实现登录窗口背景图绘画事件函数

private slots:
    void acceptedLogin();  // 用来实现接受登录按钮的槽函数
    void cancelLogin();  // 用来实现取消登录按钮的槽函数

private:
    Ui::Login *LoginUi;  // 定义用来调用UI组件的类对象
};

#endif // LOGIN_H
