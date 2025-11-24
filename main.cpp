#include "notebook.h"  // 记事本头文件管理
#include "login.h"  // 登录窗口头文件管理
#include "headerFiles.h"  // 项目头文件管理基地

int main(int argc, char *argv[]){
    QApplication a(argc, argv);  // 定义QApplication类单例对象，用于控制应用程序事件循环
    Login *login = new Login;  // 自定义并初始化Login类指针对象，用于调用本该类公有成员
    int ret = login->exec();  // 获取对话框返回结果
    if (ret == QDialog::Accepted){  // 如果结果为接受登录
        NoteBook w;  // 自定义NoteBook类对象，用于调用本该类公有成员
        w.show();  // 显示记事本
        return a.exec();  // 启动事件循环，程序将在此处运行直到主窗口关闭
    }
    else{  // 结果为取消登录
        return 0;  // 结束主函数
    }
}

// 默认用户名密码均为：user
// 重置用户名密码(需构建运行后)：打开注册表:计算机/HKEY_CURRENT_USER/Software，找到"QT记事本"，删除
// 在login类内的readSettings函数进一步更改即可完成重置用户名密码
