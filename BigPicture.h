#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BigPicture.h"
#include "ToolBar.h"

class BigPicture : public QMainWindow
{
    Q_OBJECT

public:
    BigPicture(QWidget *parent = nullptr);
    ~BigPicture();

protected:
    void resizeEvent(QResizeEvent* event) override;

private:
    Ui::BigPictureClass ui;
    ToolBar* floatingToolBar;
    void centerFloatingToolBar();
};
