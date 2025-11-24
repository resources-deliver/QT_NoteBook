#include "../tipswindows.h"

// 窗口函数: 打开文件对话框窗口(多个文件)
QStringList TipsWindows::openWindows(QString title, QString choicetipstext, QString choicetipsbutton){
    QFileDialog setwindow(this);  // 定义文件对话窗口对象,绑定主窗口
    setwindow.setWindowTitle(title);  // 设置文件对话窗口标题
    setwindow.setWindowIcon(QIcon(":/Pictures/Images/tipsWindowPng.jpg"));  // 设置文件对话窗口标题旁的图标
    setwindow.setFileMode(QFileDialog::ExistingFiles);  // 设置文件对话窗口为允许打开多个已存在文件
    setwindow.setAcceptMode(QFileDialog::AcceptOpen);  // 设置文件对话窗口为接受打开模式
    setwindow.setNameFilter(tr("Text Files (*.txt);;All Files (*)"));  // 设置文件对话窗口的可打开文件类型
    QString choiceopenpath = "D:/Code/Qt(QtCreator)/NoteBookProject/TxtPackage/";  // 定义文件对话窗口的默认打开路径
    setwindow.setDirectory(choiceopenpath);  // 设置文件对话窗口的默认打开路径
    setwindow.setLabelText(QFileDialog::FileName, choicetipstext);  // 设置文件对话窗口的标签文本(文件名提示)
    setwindow.setLabelText(QFileDialog::Accept, choicetipsbutton);  // 设置文件对话窗口的标签文本(按钮名提示)
    setwindow.setLabelText(QFileDialog::Reject, "取消");  // 设置文件对话窗口的标签文本(按钮名提示)
    setwindow.exec();  // 设置打开文件对话窗口
    if((setwindow.selectedFiles()).size() == 0){  // 如果文件对话窗口选择的文件个数为0
        return QStringList("null");  // 表明文件对话窗口没有选择文件,则返回约定的"null"
    }
    QStringList choicefilenames = setwindow.selectedFiles();  // 获取文件对话窗口选择的多个文件名
    return choicefilenames;  // 返回文件对话窗口选择的多个文件名
}
