#include "Widget.h"

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	this->setFixedSize(750, 500);
	createMenuBar();	//	生成菜单栏

	connectSlots();
}

Widget::~Widget()
{
}



void Widget::createMenuBar()
{
	manageAction = new QAction(QString::fromLocal8Bit("品牌车管理"), this);
	chartAction = new QAction(QString::fromLocal8Bit("销售统计"), this);
	quitAction = new QAction(QString::fromLocal8Bit("退出"), this);

	manageAction->setShortcut(tr("Ctrl+M"));
	chartAction->setShortcut(tr("Ctrl+C"));
	quitAction->setShortcut(tr("Ctrl+Q"));

	manageMenu = menuBar()->addMenu(QString::fromLocal8Bit("销售管理"));
	manageMenu->addAction(manageAction);
	manageMenu->addAction(chartAction);
	manageMenu->addSeparator();
	manageMenu->addAction(quitAction);

	passwordMenu = menuBar()->addMenu(QString::fromLocal8Bit("修改密码"));
	
}


void Widget::connectSlots()
{
	connect(manageAction, SIGNAL(triggered()), this, SLOT(on_manageMenu_clicked()));
	connect(chartAction, SIGNAL(triggered()), this, SLOT(on_chartMenu_clicked()));
	connect(quitAction, SIGNAL(triggered()), this, SLOT(on_quitMenu_clicked()));
}



// ************************************************ SLOTS ********************************************
void Widget::on_manageMenu_clicked()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void Widget::on_chartMenu_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
}

void Widget::on_quitMenu_clicked()
{
	this->close();
}