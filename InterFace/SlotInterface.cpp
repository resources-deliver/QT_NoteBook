#include "../notebook.h"

// 实现：文件操作下拉菜单的槽函数
void NoteBook::documentComboBox(int index){
    switch(index){
    case 0:
        newFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 1:
        openFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 2:
        saveFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 3:
        saveFileAs();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 4:
        printFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 5:
        copyFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 6:
        throwFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    case 7:
        closeFile();
        ui->DocumentComboBox->setCurrentIndex(-1);
        break;
    default:
        break;
    }
}


// 实现：文本编辑下拉菜单的槽函数
void NoteBook::editComboBox(int index){
    switch(index){
    case 0:
        clearEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 1:
        copyEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 2:
        pasteEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 3:
        cutEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 4:
        deleteEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 5:
        findEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 6:
        undoEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    case 7:
        selectAllEdit();
        ui->EditComboBox->setCurrentIndex(-1);
        break;
    default:
        break;
    }
}

// 实现：文本展示下拉菜单的槽函数
void NoteBook::textShowComboBox(int index){
    switch(index){
    case 0:
        textAlignmentLeft();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 1:
        textAlignmentCenter();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 2:
        textAlignmentRight();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 3:
        textBold();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 4:
        textItalic();
        ui->TextShowComboBox->setCurrentIndex(-1);
        break;
    case 5:
        textUnderLine();
        ui->TextShowComboBox->setCurrentIndex(-1);
    default:
        break;
    }
}

// 实现：帮助按钮的槽函数
void NoteBook::helpPushButton(){
    helpTipsWindow(this);
}

// 实现：关于按钮的槽函数
void NoteBook::aboutPushButton(){
    aboutTipsWindow();
}

// 实现：退出按钮的槽函数
void NoteBook::exitPushButton(){
    exitTipsWindow();
}

// 实现：测试按钮的槽函数
void NoteBook::testPushButton(){
    progressWindow(this);
    // sliderWindow(this);
}
