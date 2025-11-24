#ifndef SHORTCUT_H
#define SHORTCUT_H
// 快捷键头文件管理

#include "headerFiles.h"  // 引用项目头文件管理基地

// 继承于QWidget类的ShortCut快捷键类
class ShortCut : public QWidget{
    Q_OBJECT

public:
    explicit ShortCut(QWidget *parent = nullptr);  // 构造函数
    // QShortCut类，定义类的各种指针对象
    QShortcut *newFileShortCut;
    QShortcut *openFileShortCut;
    QShortcut *saveFileShortCut;
    QShortcut *saveFileAsShortCut;
    QShortcut *printFileShortCut;
    QShortcut *copyFileShortCut;
    QShortcut *deleteFileShortCut;
    QShortcut *closeFileShortCut;
    QShortcut *textAlignmentLeftShortCut;
    QShortcut *textAlignmentCenterShortCut;
    QShortcut *textAlignmentRightShortCut;
    QShortcut *textBoldShortCut;
    QShortcut *textItalicShortCut;
    QShortcut *textUnderLineShortCut;
    QShortcut *fontAddShortCut;
    QShortcut *fontReduceShortCut;
    QShortcut *fontResetShortCut;

signals:
};

#endif // SHORTCUT_H
