#include "../notebook.h"

// 实现：记事本类构造函数
NoteBook::NoteBook(QWidget *parent):QWidget(parent),ui(new Ui::NoteBook){
    ui->setupUi(this);
    shortcut = new ShortCut(this);
    tipswindows = new TipsWindows(this);
    setUi();
    notUiSignalSlot();
    uiSignalSlot();
}

// 实现：记事本类析构函数
NoteBook::~NoteBook(){
    delete ui;
}
