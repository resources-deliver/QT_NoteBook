#include "../notebook.h"

// 实现函数: 另存文件
void NoteBook::saveFileAs(){
    if (fssize == 0){
        tipswindows->errorTipsWindow(this, "错误提示", "另存文件失败\n没有打开文件!");
        return;
    }
    else{
        QString choicedFileName = tipswindows->saveWindow("新建文件", "请新建待另存的文件", "另存为");
        if (choicedFileName == QString("null")){
            tipswindows->errorTipsWindow(this, "错误提示", "另存文件失败\n没有新建另存文件!");
            return;
        }
        if (QFile::exists(choicedFileName)){
            tipswindows->errorTipsWindow(this, "错误提示", "另存文件失败\n选择的另存文件名已存在!");
            return;
        }
        QFile f(choicedFileName);
        if (!f.open(QIODevice::WriteOnly | QIODevice::Text)){
            tipswindows->errorTipsWindow(this, "错误提示", "另存文件失败\n文件打开方式错误!");
            f.moveToTrash();
            return;
        }
        else{
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
                f.write(writeInQByteArrayStr);
            }
            else if (writeChoicedButton.pushButtonReturn == 2){
                QTextStream out(&f);
                QString writeInQStringStr = ui->TextEdit->toPlainText();
                out << writeInQStringStr;
            }
            else{
                tipswindows->errorTipsWindow(this, "错误提示", "另存文件失败\n取消了另存文件!");
                f.close();
                f.moveToTrash();
                return;
            }
            QString fileName = QFileInfo(f.fileName()).fileName();
            tipswindows->informationTipsWindow(this, fileName + "\n文件另存成功!");
            f.close();
        }
    }
}
