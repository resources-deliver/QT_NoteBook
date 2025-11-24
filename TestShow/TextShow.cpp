#include "../notebook.h"

// 实现函数:对选中文本居左显示(默认)
void NoteBook::textAlignmentLeft(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if(!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    ui->TextEdit->setAlignment(Qt::AlignLeft);  // 设置文本布局参数居左
}

// 实现函数:对选中文本居中显示
void NoteBook::textAlignmentCenter(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if(!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    ui->TextEdit->setAlignment(Qt::AlignCenter);  // 设置文本布局参数居中
}

// 实现函数:对选中文本居右显示
void NoteBook::textAlignmentRight(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if(!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    ui->TextEdit->setAlignment(Qt::AlignRight);  // 设置文本布局参数居右
}

// 实现函数:对选中文本加粗
void NoteBook::textBold(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    QTextCharFormat format = cursor.charFormat();  // 获取选中文本的字符格式
    QFont currentFont = format.font();  // 获取字符格式使用的字体信息
    if(!currentFont.bold()){  // 如果字体非粗体
        currentFont.setBold(true);  // 设置字体为粗体
        // qDebug() << "文本已添加粗体...";  // 测试信息
    }
    else{  // 如果当前字体为粗体
        currentFont.setBold(false);  // 设置字体为非粗体
        // qDebug() << "文本已去除粗体...";  // 测试信息
    }
    format.setFont(currentFont);  // 设置新的字体信息到字符格式
    cursor.mergeCharFormat(format);  // 将字符格式应用到光标处文本
    ui->TextEdit->setTextCursor(cursor);  // 设置当前字体信息到文本光标
}

// 实现函数:对选中文本斜体
void NoteBook::textItalic(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    QTextCharFormat format = cursor.charFormat();  // 获取选中文本的字符格式
    QFont currentFont = format.font();  // 获取字符格式使用的字体信息
    if(!currentFont.italic()){  // 设置字体为斜体
        currentFont.setItalic(true);  // 设置字体为斜体
        // qDebug() << "文本已添加斜体...";  // 测试信息
    }
    else{
        currentFont.setItalic(false);  // 设置字体为非斜体
        // qDebug() << "文本已去除斜体...";  // 测试信息
    }
    format.setFont(currentFont);  // 设置新的字体信息到字符格式
    cursor.mergeCharFormat(format);  // 将字符格式应用到光标处文本
    ui->TextEdit->setTextCursor(cursor);  // 设置当前字体信息到文本光标
}

// 实现函数:对选中文本下划线
void NoteBook::textUnderLine(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    QTextCharFormat format = cursor.charFormat();  // 获取选中文本的字符格式
    QFont currentFont = format.font();  // 获取字符格式使用的字体信息
    if(!currentFont.underline()){  // 设置字体为下划线
        currentFont.setUnderline(true);  // 设置字体为下划线
        // qDebug() << "文本已添加下划线...";  // 测试信息
    }
    else{
        currentFont.setUnderline(false);  // 设置字体为非下划线
        // qDebug() << "文本已去除下划线...";  // 测试信息
    }
    format.setFont(currentFont);  // 设置新的字体信息到字符格式
    cursor.mergeCharFormat(format);  // 将字符格式应用到光标处文本
    ui->TextEdit->setTextCursor(cursor);  // 设置当前字体信息到文本光标
}

// 实现函数: 字体加大
void NoteBook::fontAdd(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    QTextCharFormat format = cursor.charFormat();  // 获取选中文本的字符格式
    QFont currentFont = format.font();  // 获取字符格式使用的字体信息
    int currentfontsize = currentFont.pointSize();
    currentFont.setPointSize(currentfontsize + 1);
    format.setFont(currentFont);  // 设置新的字体信息到字符格式
    cursor.mergeCharFormat(format);  // 将字符格式应用到光标处文本
    ui->TextEdit->setTextCursor(cursor);  // 设置当前字体信息到文本光标
    // qDebug() << "字体已加大...";  // 测试信息
}

// 实现函数: 字体减小
void NoteBook::fontReduce(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    QTextCharFormat format = cursor.charFormat();  // 获取选中文本的字符格式
    QFont currentFont = format.font();  // 获取字符格式使用的字体信息
    int currentfontsize = currentFont.pointSize();
    currentFont.setPointSize(currentfontsize - 1);
    format.setFont(currentFont);  // 设置新的字体信息到字符格式
    cursor.mergeCharFormat(format);  // 将字符格式应用到光标处文本
    ui->TextEdit->setTextCursor(cursor);  // 设置当前字体信息到文本光标
    // qDebug() << "字体已减小...";  // 测试信息
}

// 实现函数: 字体重置
void NoteBook::fontReset(){
    QTextCursor cursor = ui->TextEdit->textCursor();  // 获取文本光标对象
    if (!cursor.hasSelection()){  // 如果光标没有选中文本
        return;
    }
    QTextCharFormat format = cursor.charFormat();  // 获取选中文本的字符格式
    QFont currentFont = format.font();  // 获取字符格式使用的字体信息
    int currentfontsize = 9;
    currentFont.setPointSize(currentfontsize);
    format.setFont(currentFont);  // 设置新的字体信息到字符格式
    cursor.mergeCharFormat(format);  // 将字符格式应用到光标处文本
    ui->TextEdit->setTextCursor(cursor);  // 设置当前字体信息到文本光标
    // qDebug() << "字体已重置...";  // 测试信息
}
