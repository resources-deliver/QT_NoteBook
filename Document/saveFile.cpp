#include "../notebook.h"

// 实现函数: 保存文件
void NoteBook::saveFile(){
    if (fssize == 0){
        tipswindows->errorTipsWindow(this, "错误提示", "保存文件失败\n没有打开文件!");
        return;
    }
    else{
        for (int i = 0; i < fssize; i++){
            if(writeChoicedButton.checkBoxReturn == QString("dontShowAgain")){
                writeChoicedButton.pushButtonReturn = 2;
                runTimes.writeRunTimes = false;
            }
            if(runTimes.writeRunTimes == true){
                writeChoicedButton = tipswindows->writeWayTipsWindow(this);
            }
            if (writeChoicedButton.pushButtonReturn == 1){
                QString writeInQStringStr = ui->TextEdit->toPlainText();
                QByteArray writeInQByteArrayStr = writeInQStringStr.toUtf8();
                fs[i].write(writeInQByteArrayStr);
                QString fileName = QFileInfo(fs[i].fileName()).fileName();
                tipswindows->informationTipsWindow(this, fileName + "\n文件保存成功!");
            }
            else if (writeChoicedButton.pushButtonReturn == 2){
                QTextStream out(&fs[i]);
                QString writeInQStringStr = ui->TextEdit->toPlainText();
                out << writeInQStringStr;
                QString fileName = QFileInfo(fs[i].fileName()).fileName();
                tipswindows->informationTipsWindow(this, fileName + "\n文件保存成功!");
            }
            else{
                tipswindows->errorTipsWindow(this, "错误提示", "保存文件失败\n没有选择写入方式!");
            }
        }
    }
}
