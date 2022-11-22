/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_16;
    QToolButton *toolButton;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QLineEdit *hostAddressLineEdit;
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QSpinBox *portSpinBox;
    QPushButton *connectButton;
    QPushButton *pingButton;
    QLabel *label_4;
    QLineEdit *topic_Lineedit;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *messageLineEdit;
    QPushButton *publishButton;
    QLabel *label_3;
    QTextBrowser *log_TextBrowser;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(492, 573);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 1, -1, -1);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(-1, 0, 1, -1);
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(35, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/C_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(30, 24));

        horizontalLayout_16->addWidget(toolButton);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);"));

        horizontalLayout_16->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_2);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_16);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(9);
        hostAddressLineEdit = new QLineEdit(centralWidget);
        hostAddressLineEdit->setObjectName(QString::fromUtf8("hostAddressLineEdit"));

        gridLayout->addWidget(hostAddressLineEdit, 0, 0, 1, 1);

        usernameEdit = new QLineEdit(centralWidget);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));

        gridLayout->addWidget(usernameEdit, 0, 1, 1, 1);

        passwordEdit = new QLineEdit(centralWidget);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        passwordEdit->setClearButtonEnabled(false);

        gridLayout->addWidget(passwordEdit, 0, 2, 1, 1);

        portSpinBox = new QSpinBox(centralWidget);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        portSpinBox->setMaximum(65536);
        portSpinBox->setValue(1883);
        portSpinBox->setDisplayIntegerBase(10);

        gridLayout->addWidget(portSpinBox, 1, 0, 1, 1);

        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        gridLayout->addWidget(connectButton, 1, 1, 1, 1);

        pingButton = new QPushButton(centralWidget);
        pingButton->setObjectName(QString::fromUtf8("pingButton"));

        gridLayout->addWidget(pingButton, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        topic_Lineedit = new QLineEdit(centralWidget);
        topic_Lineedit->setObjectName(QString::fromUtf8("topic_Lineedit"));

        verticalLayout->addWidget(topic_Lineedit);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        messageLineEdit = new QLineEdit(centralWidget);
        messageLineEdit->setObjectName(QString::fromUtf8("messageLineEdit"));
        messageLineEdit->setMinimumSize(QSize(0, 152));
        messageLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(messageLineEdit);

        publishButton = new QPushButton(centralWidget);
        publishButton->setObjectName(QString::fromUtf8("publishButton"));

        horizontalLayout_2->addWidget(publishButton);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        log_TextBrowser = new QTextBrowser(centralWidget);
        log_TextBrowser->setObjectName(QString::fromUtf8("log_TextBrowser"));

        verticalLayout->addWidget(log_TextBrowser);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(hostAddressLineEdit, portSpinBox);
        QWidget::setTabOrder(portSpinBox, usernameEdit);
        QWidget::setTabOrder(usernameEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, connectButton);
        QWidget::setTabOrder(connectButton, pingButton);
        QWidget::setTabOrder(pingButton, topic_Lineedit);
        QWidget::setTabOrder(topic_Lineedit, messageLineEdit);
        QWidget::setTabOrder(messageLineEdit, publishButton);
        QWidget::setTabOrder(publishButton, log_TextBrowser);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "KONECRANES", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Connection", nullptr));
        hostAddressLineEdit->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        hostAddressLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter host address", nullptr));
        usernameEdit->setText(QString());
        usernameEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordEdit->setText(QString());
        passwordEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        portSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "Port: ", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pingButton->setText(QCoreApplication::translate("MainWindow", "Ping", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Topic", nullptr));
        topic_Lineedit->setText(QCoreApplication::translate("MainWindow", "topic/test", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        messageLineEdit->setText(QString());
        publishButton->setText(QCoreApplication::translate("MainWindow", "Publish ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Log Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
