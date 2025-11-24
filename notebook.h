#ifndef NOTEBOOK_H
#define NOTEBOOK_H
// 记事本头文件管理

#include "headerFiles.h"  // 引用项目头文件管理基地
#include "shortcut.h"  // 引用快捷键头文件管理
#include "tipswindows.h"  // 引用提示窗口头文件管理

// 命名空间Ui
QT_BEGIN_NAMESPACE
namespace Ui {class NoteBook;}
QT_END_NAMESPACE


// 继承于QWidget类的NoteBook记事本类
class NoteBook : public QWidget{
    Q_OBJECT

public:
    NoteBook(QWidget *parent = nullptr);  // 构造函数
    ~NoteBook();  // 析构函数

private:
    void setUi();  // 用来实现代码化ui设计函数
    void uiSignalSlot();  // 用来实现ui的信号与槽连接函数
    void notUiSignalSlot();  // 用来实现非ui的信号与槽连接函数

private:
    QFile fs[1000];  // 定义QFile类对象数组，用来设置文件
    int fssize = 0;  // 记录设置的文件个数

private:
    ShortCut *shortcut;  // 自定义ShortCut类，定义类指针对象调用该类公有成员
    TipsWindows *tipswindows;  // 自定义TipsWindows类，定义类指针对象调用本该类公有成员
    writeStruct writeChoicedButton;  // 自定义writeStruct结构体，定义结构体对象调用该结构体成员
    readStruct readChoicedButton;  // 自定义readStruct结构体，定义结构体对象调用该结构体成员
    runTimesStruct runTimes;  // 自定义runTimesStruct结构体，定义结构体对象调用该结构体成员

private:
    void newFile();  // 用来实现新建文件函数
    void openFile();  // 用来实现打开文件函数
    void saveFile();  // 用来实现保存文件函数
    void saveFileAs();  // 用来实现另存文件函数
    void printFile();  // 用来实现打印文件函数
    void copyFile();  // 用来实现复制文件函数
    void throwFile();  // 用来实现删除文件函数
    void closeFile();  // 用来实现关闭文件函数

private:
    void clearEdit();  // 用来实现清空编辑函数
    void copyEdit();  // 用来实现复制编辑函数
    void pasteEdit();  // 用来实现粘贴编辑函数
    void cutEdit();  // 用来实现剪切编辑函数
    void deleteEdit();  // 用来实现删除编辑函数
    void findEdit();  // 用来实现查找编辑函数
    void undoEdit();  // 用来实现撤销编辑函数
    void selectAllEdit();  // 用来实现全选编辑函数

private:
    void textAlignmentLeft();  // 用来实现文本居左展示函数
    void textAlignmentCenter();  // 用来实现文本居中展示函数
    void textAlignmentRight();  // 用来实现文本居右展示函数
    void textBold();  // 用来实现文本加粗展示函数
    void textItalic();  // 用来实现文本斜体展示函数
    void textUnderLine();  // 用来实现文本下划线展示函数

private:
    void helpTipsWindow(QWidget *parent);  // 用来实现帮助按钮的槽函数的函数
    void aboutTipsWindow();  // 用来实现关于按钮的槽函数的函数
    void exitTipsWindow();  // 用来实现退出按钮的槽函数的函数
    void progressWindow(QWidget *parent);  // 用来实现测试按钮的槽函数的函数

private:
    void fontAdd();  // 用来实现字体加大函数
    void fontReduce();  // 用来实现字体减小函数
    void fontReset();  // 用来实现字体重置函数

private slots:
    void documentComboBox(int index);  // 用来实现文件下拉菜单的槽函数
    void editComboBox(int index);  // 用来实现编辑下拉菜单的槽函数
    void textShowComboBox(int index);  // 用来实现展示下拉菜单的槽函数
    void helpPushButton();  // 用来实现帮助按钮的槽函数
    void aboutPushButton();  // 用来实现关于按钮的槽函数
    void exitPushButton();  // 用来实现退出按钮的槽函数
    void testPushButton();  // 用来实现测试按钮的槽函数

protected:
    void closeEvent(QCloseEvent *event);  // 用来实现关闭记事本事件函数
    void paintEvent(QPaintEvent *event);  // 用来实现记事本背景图绘画事件函数

private:
    Ui::NoteBook *ui;  // 定义用来调用UI组件的类对象
};
#endif // NOTEBOOK_H
