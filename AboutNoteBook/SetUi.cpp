#include "../notebook.h"

// 实现：记事本类代码化ui设计
void NoteBook::setUi(){
    this->setWindowTitle("QTNoteBook");
    this->setWindowIcon(QIcon(":/Pictures/Images/tipsWindowPng.jpg"));

    ui->DocumentComboBox->setMinimumSize(110, 30);
    ui->DocumentComboBox->setToolTip("文件操作");
    ui->DocumentComboBox->setPlaceholderText("文件");
    ui->DocumentComboBox->setCurrentIndex(-1);

    ui->EditComboBox->setMinimumSize(110, 30);
    ui->EditComboBox->setToolTip("文本编辑操作");
    ui->EditComboBox->setPlaceholderText("编辑");
    ui->EditComboBox->setCurrentIndex(-1);

    ui->TextShowComboBox->setMinimumSize(110, 30);
    ui->TextShowComboBox->setToolTip("文本显示操作");
    ui->TextShowComboBox->setPlaceholderText("文本显示");
    ui->TextShowComboBox->setCurrentIndex(-1);

    ui->ExitPushButton->setMinimumSize(100, 30);
    ui->ExitPushButton->setToolTip("退出应用程序");
    ui->ExitPushButton->setText("退出");
    ui->ExitPushButton->setIcon(QIcon(":/Pictures/Images/132.bmp"));
    ui->ExitPushButton->setShortcut(QKeySequence("Ctrl+Q"));
    ui->ExitPushButton->setFlat(true);
    ui->ExitPushButton->setStyleSheet(
        R"(
            QPushButton {
                background-color: none;  /* 背景色 */
                padding: 5px;
            }
            QPushButton:hover {
                background-color: red;  /* 鼠标悬浮时颜色(红色) */
            }
            QPushButton:pressed {
                background-color: white;  /* 鼠标按下时颜色(白色) */
            }
        )"
    );

    ui->AboutPushButton->setMinimumSize(100, 30);
    ui->AboutPushButton->setToolTip("关于应用程序");
    ui->AboutPushButton->setText("关于");
    ui->AboutPushButton->setIcon(QIcon(":/Pictures/Images/tipsWindowPng.jpg"));
    ui->AboutPushButton->setShortcut(QKeySequence("Ctrl+3"));
    ui->AboutPushButton->setFlat(true);
    ui->AboutPushButton->setStyleSheet(
        R"(
            QPushButton {
                background-color: none;  /* 背景色 */
                padding: 5px;
            }
            QPushButton:hover {
                background-color: blue;  /* 鼠标悬浮时颜色(蓝色) */
            }
            QPushButton:pressed {
                background-color: white;  /* 鼠标按下时颜色(白色) */
            }
        )"
    );
    // QTimer *timer = new QTimer();
    // connect(timer, &QTimer::timeout, [=](){
    //     ui->AboutPushButton->animateClick();  // 每秒自动“点击”一次
    // });
    // timer->start(2000);

    ui->HelpPushButton->setMinimumSize(100, 30);
    ui->HelpPushButton->setToolTip("帮助说明");
    ui->HelpPushButton->setText("帮助");
    ui->HelpPushButton->setIcon(QIcon(":/Pictures/Images/tipsWindowPng.jpg"));
    ui->HelpPushButton->setShortcut(QKeySequence("Ctrl+H"));
    ui->HelpPushButton->setFlat(true);
    ui->HelpPushButton->setStyleSheet(
        R"(
            QPushButton {
                background-color: none;  /* 背景色 */
                padding: 5px;
            }
            QPushButton:hover {
                background-color: blue;  /* 鼠标悬浮时颜色(蓝色) */
            }
            QPushButton:pressed {
                background-color: white;  /* 鼠标按下时颜色(白色) */
            }
        )"
    );

    ui->TestPushButton->setMinimumSize(100, 30);
    ui->TestPushButton->setToolTip("测试说明");
    ui->TestPushButton->setText("测试");
    ui->TestPushButton->setIcon(QIcon(":/Pictures/Images/tipsWindowPng.jpg"));
    ui->TestPushButton->setShortcut(QKeySequence("Ctrl+4"));
    ui->TestPushButton->setFlat(true);
    ui->TestPushButton->setStyleSheet(
        R"(
            QPushButton {
                background-color: none;  /* 背景色 */
                padding: 5px;
            }
            QPushButton:hover {
                background-color: blue;  /* 鼠标悬浮时颜色(蓝色) */
            }
            QPushButton:pressed {
                background-color: white;  /* 鼠标按下时颜色(白色) */
            }
        )"
    );

    ui->DateTimeEdit->setMinimumSize(200, 30);
    ui->DateTimeEdit->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->DateTimeEdit->setToolTip("时钟");
    ui->DateTimeEdit->setDisplayFormat("yyyy年M月d日 HH:mm:ss");
    ui->DateTimeEdit->setReadOnly(true);
}
