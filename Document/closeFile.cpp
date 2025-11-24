#include "../notebook.h"

// 实现函数: 关闭文件
void NoteBook::closeFile(){
    if (fssize == 0){
        tipswindows->errorTipsWindow(this, "错误提示", "关闭文件失败\n没有打开文件!");
        return;
    }
    else{
        ui->TextEdit->clear();
        this->setWindowTitle(QString("QTNoteBook"));
        for(int i = 0; i < fssize; i++){
            if(fs[i].isOpen()){
                fs[i].close();
                QString fileName = QFileInfo(fs[i].fileName()).fileName();
                tipswindows->informationTipsWindow(this, fileName + "\n文件关闭成功!");
                fs[i].setFileName(QString(""));
            }
        }
        fssize = 0;
    }
}
