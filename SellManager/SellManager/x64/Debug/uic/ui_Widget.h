/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetClass
{
public:
    QStackedWidget *stackedWidget;
    QWidget *managePage;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *sellPriceLineEdit;
    QLabel *label_8;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *sellFactoryComboBox;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *sellBrandComboBox;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *sellSumLineEdit;
    QLabel *label_9;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *sellNumSpinBox;
    QLabel *sellLastNumLabel;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *sellOkBtn;
    QPushButton *sellCancelBtn;
    QWidget *page_3;
    QListView *dailyList;
    QWidget *page_2;

    void setupUi(QWidget *WidgetClass)
    {
        if (WidgetClass->objectName().isEmpty())
            WidgetClass->setObjectName(QStringLiteral("WidgetClass"));
        WidgetClass->resize(750, 500);
        WidgetClass->setMinimumSize(QSize(750, 500));
        stackedWidget = new QStackedWidget(WidgetClass);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 20, 700, 410));
        stackedWidget->setMinimumSize(QSize(700, 410));
        managePage = new QWidget();
        managePage->setObjectName(QStringLiteral("managePage"));
        widget = new QWidget(managePage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 30, 691, 381));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        toolBox = new QToolBox(widget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setFrameShape(QFrame::WinPanel);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 337, 297));
        widget1 = new QWidget(page);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 120, 195, 22));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        sellPriceLineEdit = new QLineEdit(widget1);
        sellPriceLineEdit->setObjectName(QStringLiteral("sellPriceLineEdit"));

        horizontalLayout_3->addWidget(sellPriceLineEdit);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);

        widget2 = new QWidget(page);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(20, 30, 113, 22));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        sellFactoryComboBox = new QComboBox(widget2);
        sellFactoryComboBox->setObjectName(QStringLiteral("sellFactoryComboBox"));

        horizontalLayout->addWidget(sellFactoryComboBox);

        widget3 = new QWidget(page);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(20, 80, 113, 22));
        horizontalLayout_2 = new QHBoxLayout(widget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        sellBrandComboBox = new QComboBox(widget3);
        sellBrandComboBox->setObjectName(QStringLiteral("sellBrandComboBox"));

        horizontalLayout_2->addWidget(sellBrandComboBox);

        widget4 = new QWidget(page);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(30, 220, 195, 22));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        sellSumLineEdit = new QLineEdit(widget4);
        sellSumLineEdit->setObjectName(QStringLiteral("sellSumLineEdit"));

        horizontalLayout_5->addWidget(sellSumLineEdit);

        label_9 = new QLabel(widget4);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        widget5 = new QWidget(page);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(30, 170, 168, 22));
        horizontalLayout_4 = new QHBoxLayout(widget5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget5);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        sellNumSpinBox = new QSpinBox(widget5);
        sellNumSpinBox->setObjectName(QStringLiteral("sellNumSpinBox"));

        horizontalLayout_4->addWidget(sellNumSpinBox);

        sellLastNumLabel = new QLabel(widget5);
        sellLastNumLabel->setObjectName(QStringLiteral("sellLastNumLabel"));

        horizontalLayout_4->addWidget(sellLastNumLabel);

        widget6 = new QWidget(page);
        widget6->setObjectName(QStringLiteral("widget6"));
        widget6->setGeometry(QRect(77, 260, 201, 25));
        horizontalLayout_6 = new QHBoxLayout(widget6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        sellOkBtn = new QPushButton(widget6);
        sellOkBtn->setObjectName(QStringLiteral("sellOkBtn"));

        horizontalLayout_6->addWidget(sellOkBtn);

        sellCancelBtn = new QPushButton(widget6);
        sellCancelBtn->setObjectName(QStringLiteral("sellCancelBtn"));

        horizontalLayout_6->addWidget(sellCancelBtn);

        toolBox->addItem(page, QString::fromUtf8("\345\207\272\345\224\256\350\275\246\350\276\206"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 337, 297));
        toolBox->addItem(page_3, QString::fromUtf8("\345\267\262\346\234\211\346\226\260\350\275\246\345\205\245\345\272\223"));

        horizontalLayout_7->addWidget(toolBox);

        dailyList = new QListView(widget);
        dailyList->setObjectName(QStringLiteral("dailyList"));

        horizontalLayout_7->addWidget(dailyList);


        verticalLayout->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(managePage);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(WidgetClass);

        stackedWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WidgetClass);
    } // setupUi

    void retranslateUi(QWidget *WidgetClass)
    {
        WidgetClass->setWindowTitle(QApplication::translate("WidgetClass", "\346\261\275\350\275\246\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetClass", "\345\223\201\347\211\214\350\275\246\347\256\241\347\220\206", Q_NULLPTR));
        label_4->setText(QApplication::translate("WidgetClass", "\346\212\245\344\273\267\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("WidgetClass", "\344\270\207", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetClass", "\345\216\202\345\256\266\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetClass", "\345\223\201\347\211\214\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("WidgetClass", "\351\207\221\351\242\235\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("WidgetClass", "\344\270\207", Q_NULLPTR));
        label_5->setText(QApplication::translate("WidgetClass", "\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        sellLastNumLabel->setText(QApplication::translate("WidgetClass", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232000", Q_NULLPTR));
        sellOkBtn->setText(QApplication::translate("WidgetClass", "\347\241\256\345\256\232", Q_NULLPTR));
        sellCancelBtn->setText(QApplication::translate("WidgetClass", "\345\217\226\346\266\210", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("WidgetClass", "\345\207\272\345\224\256\350\275\246\350\276\206", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("WidgetClass", "\345\267\262\346\234\211\346\226\260\350\275\246\345\205\245\345\272\223", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgetClass: public Ui_WidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
