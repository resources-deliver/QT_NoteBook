#include "../notebook.h"

// 实现：记事本类关闭事件
void NoteBook::closeEvent(QCloseEvent *event){
    QMessageBox tips(this);   // 设置窗口,绑定窗口父类
    tips.setWindowTitle("退出程序");
    tips.setWindowIcon(QIcon(":/Pictures/Images/tipsWindowPng.jpg"));
    tips.setText("确认要退出吗？");
    tips.setIcon(QMessageBox::Question);
    QPushButton *exitButton = new QPushButton("确认退出", &tips);
    QPushButton *stayButton = new QPushButton("取消", &tips);
    tips.addButton(exitButton, QMessageBox::ActionRole);
    tips.addButton(stayButton, QMessageBox::ActionRole);
    tips.setEscapeButton(stayButton);
    tips.setDefaultButton(exitButton);
    tips.exec();
    if(tips.clickedButton() == exitButton)
        event->accept();
    else{
        event->ignore();
    }
}

// 实现：记事本类背景图绘画事件
void NoteBook::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing); // 平滑渲染
    // 加载并缩放背景图
    QPixmap pixmap(":/Pictures/Images/背景图2.jpg");
    QPixmap scaled = pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    // 绘制背景图
    painter.drawPixmap(0, 0, scaled);
    // 可选：叠加一层半透明颜色（实现“透明度”效果）
    painter.setBrush(QColor(0, 0, 0, 100)); // 黑色，透明度 100/255
    painter.setPen(Qt::NoPen);
    painter.drawRect(rect());
    // 调用基类 paintEvent 绘制子控件等
    QWidget::paintEvent(event);
}
