#include "../shortcut.h"

// 实现：快捷键类构造函数
ShortCut::ShortCut(QWidget *parent):QWidget{parent}{
    newFileShortCut = new QShortcut(QKeySequence("Ctrl+N"), this);
    openFileShortCut = new QShortcut(QKeySequence("Ctrl+O"), this);
    saveFileShortCut = new QShortcut(QKeySequence("Ctrl+S"), this);
    saveFileAsShortCut = new QShortcut(QKeySequence("Ctrl+Shift+S"), this);
    printFileShortCut = new QShortcut(QKeySequence("Ctrl+P"), this);
    copyFileShortCut = new QShortcut(QKeySequence("Ctrl+Y"), this);
    deleteFileShortCut = new QShortcut(QKeySequence("Ctrl+D"), this);
    closeFileShortCut = new QShortcut(QKeySequence("Ctrl+W"), this);
    textAlignmentLeftShortCut = new QShortcut(QKeySequence("Ctrl+L"), this);
    textAlignmentCenterShortCut = new QShortcut(QKeySequence("Ctrl+E"), this);
    textAlignmentRightShortCut = new QShortcut(QKeySequence("Ctrl+R"), this);
    textBoldShortCut = new QShortcut(QKeySequence("Ctrl+B"), this);
    textItalicShortCut = new QShortcut(QKeySequence("Ctrl+I"), this);
    textUnderLineShortCut = new QShortcut(QKeySequence("Ctrl+U"), this);
    fontAddShortCut = new QShortcut(QKeySequence("Ctrl+="), this);
    fontReduceShortCut = new QShortcut(QKeySequence("Ctrl+-"), this);
    fontResetShortCut = new QShortcut(QKeySequence("Ctrl+0"), this);
}
