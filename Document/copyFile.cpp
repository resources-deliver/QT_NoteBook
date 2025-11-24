#include "../notebook.h"

// 实现函数: 复制文件
void NoteBook::copyFile(){
    QString choicedFileName = tipswindows->openWindow("打开文件", "请选择被复制的文件", "选择");
    if (choicedFileName == QString("null")){
        tipswindows->errorTipsWindow(this, "错误提示", "复制文件失败\n没有选择被复制的文件!");
        return;
    }
    QString willCopyedFileName = tipswindows->saveWindow("新建文件", "请新建接收复制的文件", "复制");
    if (willCopyedFileName == QString("null")){
        tipswindows->errorTipsWindow(this, "错误提示", "复制文件失败\n没有新建接收复制文件!");
        return;
    }
    QFile f(choicedFileName);
    if (f.fileName() == willCopyedFileName){
        tipswindows->errorTipsWindow(this, "错误提示", "复制文件失败\n被复制文件与接收复制文件相同!");
        return;
    }
    if (f.copy(willCopyedFileName)){
        QString fileName = QFileInfo(f.fileName()).fileName();
        tipswindows->informationTipsWindow(this, fileName + "\n文件复制成功!");
    }
    else{
        tipswindows->errorTipsWindow(this, "错误提示", "文件复制失败!可能是" + f.errorString());
        return;
    }
}
