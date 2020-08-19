#pragma once

#include <QtWidgets/QWidget>
#include <QMainWindow>
#include "ui_Widget.h"
#include <QMenuBar>

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = Q_NULLPTR);
	~Widget();

	QMenu *manageMenu;		//	“销售管理”主菜单
	QMenu *passwordMenu;		//	"修改密码"主菜单

	//动作Action定义
	QAction *manageAction;
	QAction *chartAction;
	QAction *quitAction;

private slots:
	void on_manageMenu_clicked();		//	实现“品牌车管理”子菜单功能函数
	void on_chartMenu_clicked();		//	实现“销售统计”子菜单功能函数
	void on_quitMenu_clicked();			//	实现“退出子菜单功能函数


private:
    Ui::WidgetClass ui;

	void createMenuBar();

	void connectSlots();
};
