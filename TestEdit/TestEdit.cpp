#include "../notebook.h"

// 实现函数: 清空编辑
void NoteBook::clearEdit(){
    ui->TextEdit->clear();
}

// 实现函数: 复制编辑
void NoteBook::copyEdit(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    QString selectedText = cursor.selectedText();  // 获取当前光标选中的文本内容
    QClipboard *nowClipBoard = QApplication::clipboard();  // 定义系统剪贴板的指针对象
    nowClipBoard->setText(selectedText);  // 设置选中的文本到剪贴板
    // qDebug() << "文本已复制...";  // 测试信息
}

// 实现函数: 粘贴编辑
void NoteBook::pasteEdit(){
    QClipboard *nowClipBoard = QApplication::clipboard();  // 定义系统剪贴板的指针对象
    QString textToPaste = nowClipBoard->text();  // 获取系统剪贴板文本
    if (textToPaste.isEmpty()){  // 如果文本是空的
        return;
    }
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    cursor.insertText(textToPaste);  // 在光标处插入剪贴板的文本
    // qDebug() << "文本已粘贴...";  // 测试信息
}

// 实现函数: 剪切编辑
void NoteBook::cutEdit(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    QString selectedText = cursor.selectedText();  // 获取当前光标选中的文本内容
    QClipboard *nowClipBoard = QApplication::clipboard();  // 定义    系统剪贴板的指针对象
    nowClipBoard->setText(selectedText);  // 设置选中的文本到剪贴板
    cursor.removeSelectedText();  // 删除光标处选中的文本
    // qDebug() << "文本已剪切...";  // 测试信息
}

// 实现函数: 删除编辑
void NoteBook::deleteEdit(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    cursor.removeSelectedText();  // 删除光标处选中的文本
    // qDebug() << "文本已删除...";  // 测试信息
}

// 实现函数: 查找编辑
void NoteBook::findEdit(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        tipswindows->errorTipsWindow(this, "错误提示", "未选中文本");  // 错误提示
        return;
    }
    QString selectedText = cursor.selectedText();  // 获取当前光标选中的文本内容
    bool found = ui->TextEdit->find(selectedText);  // 查找选中的文本
    if (!found){  // 如果未发现
        tipswindows->errorTipsWindow(this, "错误提示", "未找到文本");  //错误提示
        return;
    }
    else{  // 发现了
        tipswindows->informationTipsWindow(this, "查找成功!");  // 信息提示
    }
}

// 实现函数: 撤销编辑
void NoteBook::undoEdit(){
    ui->TextEdit->undo();
}

// 实现函数: 全选编辑
void NoteBook::selectAllEdit(){
    ui->TextEdit->selectAll();
}
