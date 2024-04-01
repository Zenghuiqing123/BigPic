#pragma once

#include <QWidget>
#include "ui_ToolBar.h"

class ToolBar : public QWidget
{
	Q_OBJECT

public:
	ToolBar(QWidget *parent = nullptr);
	~ToolBar();

private:
	Ui::ToolBar ui;
};
