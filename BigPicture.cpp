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
    centerFloatingToolBar(); // ���ڳߴ�ı�ʱ���¾��й�����
}

void BigPicture::centerFloatingToolBar()
{
    int x = (this->width() - floatingToolBar->width()) / 2;
    int y = 1; // ����
    floatingToolBar->move(x, y);
}
