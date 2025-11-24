#include "../notebook.h"

// 实现：记事本类非ui的信号与槽连接
void NoteBook::notUiSignalSlot(){
    connect(shortcut->newFileShortCut, &QShortcut::activated, this, &NoteBook::newFile);  // 函数指针连接
    connect(shortcut->openFileShortCut, &QShortcut::activated, this, &NoteBook::openFile);
    connect(shortcut->saveFileShortCut, &QShortcut::activated, this, &NoteBook::saveFile);
    connect(shortcut->saveFileAsShortCut, &QShortcut::activated, this, &NoteBook::saveFileAs);
    connect(shortcut->printFileShortCut, &QShortcut::activated, this, &NoteBook::printFile);
    connect(shortcut->copyFileShortCut, &QShortcut::activated, this, &NoteBook::copyFile);
    connect(shortcut->deleteFileShortCut, &QShortcut::activated, this, &NoteBook::throwFile);
    connect(shortcut->closeFileShortCut, &QShortcut::activated, this, &NoteBook::closeFile);
    connect(shortcut->textAlignmentLeftShortCut, &QShortcut::activated, this, &NoteBook::textAlignmentLeft);
    connect(shortcut->textAlignmentCenterShortCut, &QShortcut::activated, this, &NoteBook::textAlignmentCenter);
    connect(shortcut->textAlignmentRightShortCut, &QShortcut::activated, this, &NoteBook::textAlignmentRight);
    connect(shortcut->textBoldShortCut, &QShortcut::activated, this, &NoteBook::textBold);
    connect(shortcut->textItalicShortCut, &QShortcut::activated, this, &NoteBook::textItalic);
    connect(shortcut->textUnderLineShortCut, &QShortcut::activated, this, &NoteBook::textUnderLine);
    connect(shortcut->fontAddShortCut, &QShortcut::activated, this, &NoteBook::fontAdd);
    connect(shortcut->fontReduceShortCut, &QShortcut::activated, this, &NoteBook::fontReduce);
    connect(shortcut->fontResetShortCut, &QShortcut::activated, this, &NoteBook::fontReset);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, [=](){
        QDateTime currentDateTime(QDateTime::currentDateTime()); //读取当前日期时间
        ui->DateTimeEdit->setDateTime(currentDateTime);//设置日期时间
    });
    timer->start(1000);
}

// 实现：记事本类ui的信号与槽连接
void NoteBook::uiSignalSlot(){
    // connect(ui->DocumentComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(documentComboBox(int)));  // 普通连接
    connect(ui->DocumentComboBox, &QComboBox::currentIndexChanged, this, &NoteBook::documentComboBox);  // 函数指针连接
    connect(ui->EditComboBox, &QComboBox::currentIndexChanged, this, &NoteBook::editComboBox);
    connect(ui->TextShowComboBox, &QComboBox::currentIndexChanged, this, &NoteBook::textShowComboBox);

    // connect(ui->ExitPushButton, SIGNAL(clicked()), this, SLOT(exitPushButton());  // 普通连接
    connect(ui->ExitPushButton, &QPushButton::clicked, this, &NoteBook::exitPushButton);  // 函数指针连接
    connect(ui->AboutPushButton, &QPushButton::clicked, this, &NoteBook::aboutPushButton);
    connect(ui->HelpPushButton, &QPushButton::clicked, this, &NoteBook::helpPushButton);
    connect(ui->TestPushButton, &QPushButton::clicked, this, &NoteBook::testPushButton);
}
