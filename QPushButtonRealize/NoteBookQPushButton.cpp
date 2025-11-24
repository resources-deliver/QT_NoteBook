#include "../notebook.h"

// 实现：记事本类退出按钮的槽函数的函数
void NoteBook::exitTipsWindow(){
    this->close();
}

// 实现：记事本类帮助按钮的槽函数的函数
void NoteBook::helpTipsWindow(QWidget *parent){
    QMessageBox msgBox(parent);
    msgBox.setWindowTitle(QString("快捷键查看"));
    msgBox.setText(QString("各操作的快捷键查看"));
    msgBox.setDetailedText(
        "新建文件:" + (shortcut->newFileShortCut->key()).toString() + "\n" +
        "打开文件:" + (shortcut->openFileShortCut->key()).toString() + "\n" +
        "保存文件:" + (shortcut->saveFileShortCut->key()).toString() + "\n" +
        "另存文件:" + (shortcut->saveFileAsShortCut->key().toString()) + "\n" +
        "打印文件:" + (shortcut->printFileShortCut->key()).toString() + "\n" +
        "关闭文件:" + (shortcut->closeFileShortCut->key()).toString() + "\n" +
        "复制文件:" + (shortcut->copyFileShortCut->key()).toString() + "\n" +
        "删除文件:" + (shortcut->deleteFileShortCut->key()).toString() + "\n" +
        "文本居左:" + (shortcut->textAlignmentLeftShortCut->key()).toString() + "\n" +
        "文本居中:" + (shortcut->textAlignmentCenterShortCut->key()).toString() + "\n" +
        "文本居右:" + (shortcut->textAlignmentRightShortCut->key()).toString() + "\n" +
        "文本加粗:" + (shortcut->textBoldShortCut->key()).toString() + "\n" +
        "文本斜体:" + (shortcut->textItalicShortCut->key()).toString() + "\n" +
        "文本下划线:" + (shortcut->textUnderLineShortCut->key()).toString() + "\n" +
        "字体加大:" + (shortcut->fontAddShortCut->key()).toString() + "\n" +
        "字体减小:" + (shortcut->fontReduceShortCut->key()).toString() + "\n" +
        "字体重置:" + (shortcut->fontResetShortCut->key()).toString() + "\n" +
        "退出:" + (ui->ExitPushButton->shortcut()).toString() + "\n" +
        "关于:" + (ui->AboutPushButton->shortcut()).toString() + "\n" +
        "帮助:" + (ui->HelpPushButton->shortcut()).toString() + "\n" +
        "测试:" + (ui->TestPushButton->shortcut().toString()));  // 设置详细文本
    msgBox.setIcon(QMessageBox::NoIcon);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.exec();
}

// 实现：记事本类关于按钮的槽函数的函数
void NoteBook::aboutTipsWindow(){
    QString title = "这是一个使用Qt C++开发的记事本项目";
    QString text1 =
        "<p style='text-align: center;'>包括新建、打开、保存、另存为、</p>"
        "<p style='text-align: center;'>打印(待完善)、关闭、复制、删除等文件操作</p>";
    QString text2 =
        "<p style='text-align: center;'>还包括清空、复制、粘贴、剪切、</p>"
        "<p style='text-align: center;'>删除、查找(待完善)、撤销、全选等文本操作</p>";
    QMessageBox::about(this, title, text1+text2);
}

// 实现：记事本类测试按钮的槽函数的函数
void NoteBook::progressWindow(QWidget *parent){
    QProgressDialog progress(parent);
    progress.setWindowTitle("操作进度");
    progress.setLabelText("正在处理...");
    progress.setCancelButtonText("取消");
    progress.setRange(0, 100); // 设置进度范围
    progress.setMinimumDuration(0); // 立即显示
    progress.show();
    // 模拟进度更新
    for(int i = 0; i <= 100; i++){
        if(progress.wasCanceled())
            break;
        progress.setValue(i);
        QThread::msleep(10); // 模拟耗时操作
        QCoreApplication::processEvents(); // 处理事件循环
    }
}
