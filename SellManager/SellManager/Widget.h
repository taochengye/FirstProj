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

	QMenu *manageMenu;		//	�����۹������˵�
	QMenu *passwordMenu;		//	"�޸�����"���˵�

	//����Action����
	QAction *manageAction;
	QAction *chartAction;
	QAction *quitAction;

private slots:
	void on_manageMenu_clicked();		//	ʵ�֡�Ʒ�Ƴ������Ӳ˵����ܺ���
	void on_chartMenu_clicked();		//	ʵ�֡�����ͳ�ơ��Ӳ˵����ܺ���
	void on_quitMenu_clicked();			//	ʵ�֡��˳��Ӳ˵����ܺ���


private:
    Ui::WidgetClass ui;

	void createMenuBar();

	void connectSlots();
};
