#include "../notebook.h"

// 实现函数: 新建文件
void NoteBook::newFile(){
    QString choicedNewFileName = tipswindows->saveWindow("新建文件", "请新建文件名", "新建");
    if (choicedNewFileName == QString("null")){
        tipswindows->errorTipsWindow(this, "错误提示", "新建文件失败\n文件名不能为空!");
        return;
    }
    if (QFile::exists(choicedNewFileName)){
        tipswindows->errorTipsWindow(this, "错误提示", "新建文件失败\n文件名已存在!");
        return;
    }
    QFile fileObject(choicedNewFileName);
    ui->TextEdit->clear();
    if (!fileObject.open(QIODevice::WriteOnly | QIODevice::Text)){
        tipswindows->errorTipsWindow(this, "错误提示", "新建文件失败\n文件打开方式错误!");
        fileObject.moveToTrash();
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
        if(writeChoicedButton.pushButtonReturn == 1){
            QString writeInQStringStr = QString("");
            QByteArray writeInQByteArrayStr = writeInQStringStr.toUtf8();
            fileObject.write(writeInQByteArrayStr);
        }
        else if(writeChoicedButton.pushButtonReturn == 2){
            QTextStream out(&fileObject);
            out << QString("");
        }
        else{
            tipswindows->errorTipsWindow(this, "错误提示", "新建文件失败\n取消了新建文件!");
            fileObject.close();
            fileObject.moveToTrash();
            return;
        }
        QString fileName = QFileInfo(fileObject.fileName()).fileName();
        tipswindows->informationTipsWindow(this, fileName + "\n文件新建成功!");
        fileObject.close();
    }
}
