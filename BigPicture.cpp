#include "BigPicture.h"

BigPicture::BigPicture(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    floatingToolBar = new ToolBar(this);
    floatingToolBar->show();
    centerFloatingToolBar();
}

BigPicture::~BigPicture()
{
    

}

void BigPicture::resizeEvent(QResizeEvent* event)
{
    QMainWindow::resizeEvent(event);
    centerFloatingToolBar(); // 窗口尺寸改变时重新居中工具栏
}

void BigPicture::centerFloatingToolBar()
{
    int x = (this->width() - floatingToolBar->width()) / 2;
    int y = 1; // 顶部
    floatingToolBar->move(x, y);
}
