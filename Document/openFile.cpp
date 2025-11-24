#include "../notebook.h"

// 实现函数: 打开文件
void NoteBook::openFile(){
    QStringList choicedOpenFileNames = tipswindows->openWindows("选择文件", "请选择(多个)待打开的文件", "打开");
    if (choicedOpenFileNames == QStringList("null")){
        tipswindows->errorTipsWindow(this, "错误提示", "打开文件失败\n没有选择打开文件!");
        return;
    }
    ui->TextEdit->clear();
    for (int i = 0; i < choicedOpenFileNames.size(); i++){
        fs[i].setFileName(choicedOpenFileNames[i]);
        fssize++;
        QString fileName = QFileInfo(fs[i].fileName()).fileName();
        if (!fs[i].open(QIODevice::ReadWrite | QIODevice::Text)){
            tipswindows->errorTipsWindow(this, "错误提示", fileName + "文件打开失败\n文件格式错误!");
        }
        else{
            this->setWindowTitle(fileName);
            if(readChoicedButton.checkBoxReturn == QString("dontShowAgain")){
                readChoicedButton.pushButtonReturn = 2;
                runTimes.readRunTims = false;
            }
            if(runTimes.readRunTims == true){
                readChoicedButton = tipswindows->readWayTipsWindow(this);
            }
            if (readChoicedButton.pushButtonReturn == 1){
                while (!fs[i].atEnd()){
                    QByteArray readedOutQByteArrayStr = fs[i].readLine();
                    QString readedOutQStringStr = readedOutQByteArrayStr;
                    ui->TextEdit->append(readedOutQStringStr);
                }
            }
            else if (readChoicedButton.pushButtonReturn == 2){
                QTextStream in(&fs[i]);
                while (!in.atEnd()){
                    QString readedOutQStringStr = in.readLine();
                    ui->TextEdit->append(readedOutQStringStr);
                }
            }
            else if (readChoicedButton.pushButtonReturn == 3){
                QByteArray readedOutQByteArrayStr = fs[i].readAll();
                QString readedOutQStringStr = readedOutQByteArrayStr;
                ui->TextEdit->append(readedOutQStringStr);
            }
            else{
                tipswindows->errorTipsWindow(this, "错误提示", "打开文件失败\n取消了打开文件!");
                fs[i].close();
                fs[i].setFileName("");
                this->setWindowTitle(QString("QTNoteBook"));
            }
        }
        if (i != choicedOpenFileNames.size() - 1){
            ui->TextEdit->append(QString("\n"));
        }
    }
}
