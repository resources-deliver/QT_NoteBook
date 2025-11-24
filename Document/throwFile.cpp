#include "../notebook.h"

// 实现函数: 移入回收站
void NoteBook::throwFile(){
    QStringList choicedFileNames = tipswindows->openWindows("打开文件", "选择要移入回收站的文件", "删除");
    if(choicedFileNames == QStringList("null")){
        tipswindows->errorTipsWindow(this, "错误提示", "文件移入回收站失败\n没有选择文件!");
        return;
    }
    QFile f[choicedFileNames.size()];
    for (int i = 0; i < choicedFileNames.size(); i++){
        int canShutDownFileCondition = 0;
        f[i].setFileName(choicedFileNames[i]);
        for (int j = 0; j < fssize; j++){
            if (f[i].fileName() == fs[j].fileName()){
                tipswindows->errorTipsWindow(this, "错误提示", "文件移入回收站失败\n文件已打开!");
                break;
            }
            else{
                canShutDownFileCondition++;
            }
        }
        if(canShutDownFileCondition == fssize){
            QString fileName = QFileInfo(f[i].fileName()).fileName();
            if (f[i].moveToTrash()){
                tipswindows->informationTipsWindow(this, fileName + "\n文件移入回收站成功!");
            }
            else{
                tipswindows->errorTipsWindow(this, "错误提示", "文件移入回收站失败!可能是" + f[i].errorString());
            }
        }
    }
}
