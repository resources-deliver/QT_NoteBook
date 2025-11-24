# QtNoteBookProject

*本项目是一个基于Qt C++的GUI记事本程序*

*包含以QWidget类为基础的记事本主体以及以QDialog类为基础的登录窗口*

*使用QtCreator为开发工具，CMake构建*

*登录窗口功能简单，仅仅包含输入用户名密码点击登录让程序根据正确与否做出相应的响应*

*记事本主体功能也简易，文件操作层面包含新建、打开、保存、另存、复制、关闭、删除功能；*

*文本编辑层面包含清空、复制、粘贴、剪切、删除、查找、撤销、全选功能；*

*文本展示层面包含文本居左、居中、居右、加粗、斜体、下划线、字体加大、字体减小、字体重置功能；*

*还包含实时钟表设计、各类自定义窗口弹窗设计、各种快捷键设计、退出、帮助、关于等按钮操作；*

*本项目隶属于学生课程设计，项目有小部分功能未完善*

## 项目目录层级

* **`Forms（Ui文件夹）`**
    + login.ui（登录窗口ui）
    + notebook.ui（记事本主体ui）

* **`Header Files（头文件文件夹）`**
    + headerFiles.h（项目头文件管理基地）
    + login.h（登录窗口头文件）
    + notebook.h（记事本主体头文件）
    + shortcut.h（记事本主体快捷键头文件）
    + tipswindows.h（记事本主体提示弹窗头文件）

* **`Resources（图片文件夹）`**
    + **Pictures.qrc**
        * /Pictures
            * Images
                * 132.bmp
                * tipsWindowPng.jpg
                * 背景图2.jpg

* **`Source Files（源文件文件夹）`**
    + **AboutLogin**
        * login.cpp（登录窗口构造函数与析构函数主体）
        * SetUi.cpp（登录窗口Ui代码化设计）
        * SignalSlot.cpp（登录窗口信号与槽设计）
    
    + **AboutNoteBook**
        * notebook.cpp（记事本主体构造函数与析构函数主体）
        * SetUi.cpp（记事本主体Ui代码化设计）
        * SignalSlot.cpp（记事本主体信号与槽设计）
        
    + **Document（QComboBox组件菜单下）（槽函数的具体内容）**
        * newFile.cpp（新建文件）
        * openFile.cpp（打开文件）
        * saveFile.cpp（保存文件）
        * saveFileAs.cpp（另存文件）
        * printFile.cpp（打印文件)
        * copyFile.cpp（复制文件）
        * throwFile.cpp（删除文件）
        * closeFile.cpp（关闭文件）
    
    + **Event**
        * LoginEvent.cpp（登录窗口事件处理）
        * NoteBookEvent.cpp（记事本主体事件处理）

    + **InterFace**
        * SlotInterface.cpp（记事本主体接口槽函数）

    + **QPushButtonRealize（QPushButton按钮）（槽函数的具体内容）**
        * LoginQPushButton.cpp（登录窗口按钮）
        * NoteBookQPushButton.cpp（记事本主体按钮）

    + **Shortcut**
        * Shortcut.cpp（记事本主体快捷键）

    + **TestEdit（QComboBox组件菜单下）（槽函数的具体内容）**
        * TestEdit.cpp（记事本主体文本编辑）
    
    + **TestShow（QComboBox组件菜单下）（槽函数的具体内容）**
        * TestShow.cpp（记事本主体文本显示）
    
    + **TipsWindows**
        * tipswindows.cpp（记事本主体提示弹窗构造函数与析构函数）
        * openWindow.cpp（选择打开文件）
        * openWindows.cpp（选择打开多个文件）
        * saveWindow.cpp（选择新建文件）
        * errorTipsWindow.cpp（错误提示）
        * informationTipsWindow.cpp（信息提示）
        * writeWayTipsWindow.cpp（选择写入方式）
        * readWayTipsWindow.cpp（选择读取方式）

    + **main.cpp（启动程序主函数）**
---
### 觉得还过得去的话给个Star鼓励一下吧，感谢你的浏览，祝你代码红红火火（bushi）
---
