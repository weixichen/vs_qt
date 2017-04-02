/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pButton_W1;
    QPushButton *pButton_W2;
    QPushButton *pButton_Pf;
    QPushButton *pButton_Md;
    QPushButton *pButton_Xd;
    QPushButton *pButton_Gd;
    QPushButton *pButton_Cf1;
    QPushButton *pButton_Cf2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pButton_Ft1;
    QPushButton *pButton_Ft2;
    QPushButton *pButton_Ft3;
    QPushButton *pButton_Ft4;
    QPushButton *pButton_Ft5;
    QPushButton *pButton_Ftqk;
    QPushButton *pButton_Ctc;
    QPushButton *pButton_Ktc;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pButton_Xf1;
    QPushButton *pButton_Xf2;
    QPushButton *pButton_Df1;
    QPushButton *pButton_Df2;
    QPushButton *pButton_Kt1;
    QPushButton *pButton_Kt2;
    QPushButton *pButton_Yt;
    QPushButton *pButton_Dqk;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pButton_Rsq;
    QPushButton *pButton_Rsqsz;
    QPushButton *pButton_Af;
    QPushButton *pButton_Afsz;
    QPushButton *pButton_Wd;
    QPushButton *pButton_Sd;
    QPushButton *pButton_Ftqg;
    QPushButton *pButton_Dqg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(826, 487);
        MainWindow->setMinimumSize(QSize(800, 480));
        MainWindow->setSizeIncrement(QSize(800, 480));
        MainWindow->setBaseSize(QSize(800, 480));
        QPalette palette;
        QBrush brush(QColor(85, 85, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral("opic.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral("opic.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QStringLiteral("opic.ico"), QSize(), QIcon::Disabled, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(170, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(255, 170, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush4(QColor(85, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        QBrush brush5(QColor(255, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        QBrush brush7(QColor(120, 120, 120, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        centralWidget->setPalette(palette1);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 22, 801, 451));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pButton_W1 = new QPushButton(layoutWidget);
        pButton_W1->setObjectName(QStringLiteral("pButton_W1"));
        pButton_W1->setCheckable(true);

        horizontalLayout->addWidget(pButton_W1);

        pButton_W2 = new QPushButton(layoutWidget);
        pButton_W2->setObjectName(QStringLiteral("pButton_W2"));
        pButton_W2->setCheckable(true);

        horizontalLayout->addWidget(pButton_W2);

        pButton_Pf = new QPushButton(layoutWidget);
        pButton_Pf->setObjectName(QStringLiteral("pButton_Pf"));
        pButton_Pf->setCheckable(true);

        horizontalLayout->addWidget(pButton_Pf);

        pButton_Md = new QPushButton(layoutWidget);
        pButton_Md->setObjectName(QStringLiteral("pButton_Md"));
        pButton_Md->setCheckable(true);

        horizontalLayout->addWidget(pButton_Md);

        pButton_Xd = new QPushButton(layoutWidget);
        pButton_Xd->setObjectName(QStringLiteral("pButton_Xd"));
        pButton_Xd->setCheckable(true);

        horizontalLayout->addWidget(pButton_Xd);

        pButton_Gd = new QPushButton(layoutWidget);
        pButton_Gd->setObjectName(QStringLiteral("pButton_Gd"));
        pButton_Gd->setCheckable(true);

        horizontalLayout->addWidget(pButton_Gd);

        pButton_Cf1 = new QPushButton(layoutWidget);
        pButton_Cf1->setObjectName(QStringLiteral("pButton_Cf1"));
        pButton_Cf1->setCheckable(true);

        horizontalLayout->addWidget(pButton_Cf1);

        pButton_Cf2 = new QPushButton(layoutWidget);
        pButton_Cf2->setObjectName(QStringLiteral("pButton_Cf2"));
        pButton_Cf2->setCheckable(true);

        horizontalLayout->addWidget(pButton_Cf2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pButton_Ft1 = new QPushButton(layoutWidget);
        pButton_Ft1->setObjectName(QStringLiteral("pButton_Ft1"));
        pButton_Ft1->setCheckable(true);

        horizontalLayout_2->addWidget(pButton_Ft1);

        pButton_Ft2 = new QPushButton(layoutWidget);
        pButton_Ft2->setObjectName(QStringLiteral("pButton_Ft2"));
        pButton_Ft2->setCheckable(true);

        horizontalLayout_2->addWidget(pButton_Ft2);

        pButton_Ft3 = new QPushButton(layoutWidget);
        pButton_Ft3->setObjectName(QStringLiteral("pButton_Ft3"));
        pButton_Ft3->setCheckable(true);

        horizontalLayout_2->addWidget(pButton_Ft3);

        pButton_Ft4 = new QPushButton(layoutWidget);
        pButton_Ft4->setObjectName(QStringLiteral("pButton_Ft4"));
        pButton_Ft4->setCheckable(true);

        horizontalLayout_2->addWidget(pButton_Ft4);

        pButton_Ft5 = new QPushButton(layoutWidget);
        pButton_Ft5->setObjectName(QStringLiteral("pButton_Ft5"));
        pButton_Ft5->setCheckable(true);

        horizontalLayout_2->addWidget(pButton_Ft5);

        pButton_Ftqk = new QPushButton(layoutWidget);
        pButton_Ftqk->setObjectName(QStringLiteral("pButton_Ftqk"));
        pButton_Ftqk->setCheckable(true);

        horizontalLayout_2->addWidget(pButton_Ftqk);

        pButton_Ctc = new QPushButton(layoutWidget);
        pButton_Ctc->setObjectName(QStringLiteral("pButton_Ctc"));
        pButton_Ctc->setCheckable(true);

        horizontalLayout_2->addWidget(pButton_Ctc);

        pButton_Ktc = new QPushButton(layoutWidget);
        pButton_Ktc->setObjectName(QStringLiteral("pButton_Ktc"));
        pButton_Ktc->setCheckable(true);

        horizontalLayout_2->addWidget(pButton_Ktc);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pButton_Xf1 = new QPushButton(layoutWidget);
        pButton_Xf1->setObjectName(QStringLiteral("pButton_Xf1"));
        pButton_Xf1->setCheckable(true);

        horizontalLayout_3->addWidget(pButton_Xf1);

        pButton_Xf2 = new QPushButton(layoutWidget);
        pButton_Xf2->setObjectName(QStringLiteral("pButton_Xf2"));
        pButton_Xf2->setCheckable(true);

        horizontalLayout_3->addWidget(pButton_Xf2);

        pButton_Df1 = new QPushButton(layoutWidget);
        pButton_Df1->setObjectName(QStringLiteral("pButton_Df1"));
        pButton_Df1->setCheckable(true);

        horizontalLayout_3->addWidget(pButton_Df1);

        pButton_Df2 = new QPushButton(layoutWidget);
        pButton_Df2->setObjectName(QStringLiteral("pButton_Df2"));
        pButton_Df2->setCheckable(true);

        horizontalLayout_3->addWidget(pButton_Df2);

        pButton_Kt1 = new QPushButton(layoutWidget);
        pButton_Kt1->setObjectName(QStringLiteral("pButton_Kt1"));
        pButton_Kt1->setCheckable(true);

        horizontalLayout_3->addWidget(pButton_Kt1);

        pButton_Kt2 = new QPushButton(layoutWidget);
        pButton_Kt2->setObjectName(QStringLiteral("pButton_Kt2"));
        pButton_Kt2->setCheckable(true);

        horizontalLayout_3->addWidget(pButton_Kt2);

        pButton_Yt = new QPushButton(layoutWidget);
        pButton_Yt->setObjectName(QStringLiteral("pButton_Yt"));
        pButton_Yt->setCheckable(true);

        horizontalLayout_3->addWidget(pButton_Yt);

        pButton_Dqk = new QPushButton(layoutWidget);
        pButton_Dqk->setObjectName(QStringLiteral("pButton_Dqk"));
        pButton_Dqk->setCheckable(true);

        horizontalLayout_3->addWidget(pButton_Dqk);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pButton_Rsq = new QPushButton(layoutWidget);
        pButton_Rsq->setObjectName(QStringLiteral("pButton_Rsq"));
        pButton_Rsq->setCheckable(true);

        horizontalLayout_4->addWidget(pButton_Rsq);

        pButton_Rsqsz = new QPushButton(layoutWidget);
        pButton_Rsqsz->setObjectName(QStringLiteral("pButton_Rsqsz"));

        horizontalLayout_4->addWidget(pButton_Rsqsz);

        pButton_Af = new QPushButton(layoutWidget);
        pButton_Af->setObjectName(QStringLiteral("pButton_Af"));
        pButton_Af->setCheckable(true);

        horizontalLayout_4->addWidget(pButton_Af);

        pButton_Afsz = new QPushButton(layoutWidget);
        pButton_Afsz->setObjectName(QStringLiteral("pButton_Afsz"));

        horizontalLayout_4->addWidget(pButton_Afsz);

        pButton_Wd = new QPushButton(layoutWidget);
        pButton_Wd->setObjectName(QStringLiteral("pButton_Wd"));

        horizontalLayout_4->addWidget(pButton_Wd);

        pButton_Sd = new QPushButton(layoutWidget);
        pButton_Sd->setObjectName(QStringLiteral("pButton_Sd"));

        horizontalLayout_4->addWidget(pButton_Sd);

        pButton_Ftqg = new QPushButton(layoutWidget);
        pButton_Ftqg->setObjectName(QStringLiteral("pButton_Ftqg"));
        pButton_Ftqg->setCheckable(true);

        horizontalLayout_4->addWidget(pButton_Ftqg);

        pButton_Dqg = new QPushButton(layoutWidget);
        pButton_Dqg->setObjectName(QStringLiteral("pButton_Dqg"));
        pButton_Dqg->setCheckable(false);

        horizontalLayout_4->addWidget(pButton_Dqg);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ZNJJ", Q_NULLPTR));
        pButton_W1->setText(QApplication::translate("MainWindow", "\345\215\253\347\224\237\351\227\2641", Q_NULLPTR));
        pButton_W2->setText(QApplication::translate("MainWindow", "\345\215\253\347\224\237\351\227\2642", Q_NULLPTR));
        pButton_Pf->setText(QApplication::translate("MainWindow", "\346\216\222\351\243\216\346\211\207", Q_NULLPTR));
        pButton_Md->setText(QApplication::translate("MainWindow", "\351\227\250\347\201\257", Q_NULLPTR));
        pButton_Xd->setText(QApplication::translate("MainWindow", "\351\236\213\346\237\234\347\201\257", Q_NULLPTR));
        pButton_Gd->setText(QApplication::translate("MainWindow", "\350\277\207\351\201\223\347\201\257", Q_NULLPTR));
        pButton_Cf1->setText(QApplication::translate("MainWindow", "\345\216\250\346\210\277\347\201\2571", Q_NULLPTR));
        pButton_Cf2->setText(QApplication::translate("MainWindow", "\345\216\250\346\210\277\347\201\2572", Q_NULLPTR));
        pButton_Ft1->setText(QApplication::translate("MainWindow", "\351\245\255\345\216\205\347\201\2571", Q_NULLPTR));
        pButton_Ft2->setText(QApplication::translate("MainWindow", "\351\245\255\345\216\205\347\201\2572", Q_NULLPTR));
        pButton_Ft3->setText(QApplication::translate("MainWindow", "\351\245\255\345\216\205\347\201\2573", Q_NULLPTR));
        pButton_Ft4->setText(QApplication::translate("MainWindow", "\351\245\255\345\216\205\347\201\2574", Q_NULLPTR));
        pButton_Ft5->setText(QApplication::translate("MainWindow", "\351\245\255\345\216\205\347\201\2575", Q_NULLPTR));
        pButton_Ftqk->setText(QApplication::translate("MainWindow", "\351\245\255\345\216\205\347\201\257", Q_NULLPTR));
        pButton_Ctc->setText(QApplication::translate("MainWindow", "\351\245\255\345\216\205\345\275\251\347\201\257", Q_NULLPTR));
        pButton_Ktc->setText(QApplication::translate("MainWindow", "\345\256\242\345\216\205\345\275\251\347\201\257", Q_NULLPTR));
        pButton_Xf1->setText(QApplication::translate("MainWindow", "\345\260\217\346\210\277\347\201\2571", Q_NULLPTR));
        pButton_Xf2->setText(QApplication::translate("MainWindow", "\345\260\217\346\210\277\347\201\2572", Q_NULLPTR));
        pButton_Df1->setText(QApplication::translate("MainWindow", "\345\244\247\346\210\277\347\201\2571", Q_NULLPTR));
        pButton_Df2->setText(QApplication::translate("MainWindow", "\345\244\247\346\210\277\347\201\2572", Q_NULLPTR));
        pButton_Kt1->setText(QApplication::translate("MainWindow", "\345\256\242\345\216\205\347\201\2571", Q_NULLPTR));
        pButton_Kt2->setText(QApplication::translate("MainWindow", "\345\256\242\345\216\205\347\201\2572", Q_NULLPTR));
        pButton_Yt->setText(QApplication::translate("MainWindow", "\351\230\263\345\217\260\347\201\257", Q_NULLPTR));
        pButton_Dqk->setText(QApplication::translate("MainWindow", "\347\201\257\345\205\250\345\205\263", Q_NULLPTR));
        pButton_Rsq->setText(QApplication::translate("MainWindow", "\347\203\255\346\260\264\345\231\250", Q_NULLPTR));
        pButton_Rsqsz->setText(QApplication::translate("MainWindow", "\347\203\255\346\260\264\345\231\250\350\256\276\347\275\256", Q_NULLPTR));
        pButton_Af->setText(QApplication::translate("MainWindow", "\345\256\211\351\230\262", Q_NULLPTR));
        pButton_Afsz->setText(QApplication::translate("MainWindow", "\345\256\211\351\230\262\350\256\276\347\275\256", Q_NULLPTR));
        pButton_Wd->setText(QApplication::translate("MainWindow", "\345\256\244\345\206\205\346\270\251\345\272\246", Q_NULLPTR));
        pButton_Sd->setText(QApplication::translate("MainWindow", "\345\256\244\345\206\205\346\271\277\345\272\246", Q_NULLPTR));
        pButton_Ftqg->setText(QApplication::translate("MainWindow", "\346\270\251\346\271\277\345\272\246\350\256\276\347\275\256", Q_NULLPTR));
        pButton_Dqg->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
