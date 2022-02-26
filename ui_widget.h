/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QTextEdit *textForCode;
    QTextEdit *textForDecode;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *metods;
    QRadioButton *codeCaesar;
    QRadioButton *codeSkital;
    QRadioButton *codeWithPassword;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *codeProperty;
    QSpinBox *codeParametrs;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QPushButton *coderButton;
    QPushButton *decoderButton;
    QPushButton *swapButton;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *examples;
    QPushButton *examplesVeni;
    QPushButton *examplesBird;
    QPushButton *examplesFire;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(700, 550);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(22, 2, 493, 503));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Vertical);
        textForCode = new QTextEdit(splitter);
        textForCode->setObjectName(QStringLiteral("textForCode"));
        textForCode->setMinimumSize(QSize(200, 100));
        splitter->addWidget(textForCode);
        textForDecode = new QTextEdit(splitter);
        textForDecode->setObjectName(QStringLiteral("textForDecode"));
        textForDecode->setMinimumSize(QSize(200, 100));
        splitter->addWidget(textForDecode);

        horizontalLayout_2->addWidget(splitter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        metods = new QLabel(layoutWidget);
        metods->setObjectName(QStringLiteral("metods"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(metods->sizePolicy().hasHeightForWidth());
        metods->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        metods->setFont(font);
        metods->setStyleSheet(QStringLiteral("color:#777;"));

        verticalLayout_2->addWidget(metods);

        codeCaesar = new QRadioButton(layoutWidget);
        codeCaesar->setObjectName(QStringLiteral("codeCaesar"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(codeCaesar->sizePolicy().hasHeightForWidth());
        codeCaesar->setSizePolicy(sizePolicy2);
        codeCaesar->setFont(font);

        verticalLayout_2->addWidget(codeCaesar);

        codeSkital = new QRadioButton(layoutWidget);
        codeSkital->setObjectName(QStringLiteral("codeSkital"));
        sizePolicy2.setHeightForWidth(codeSkital->sizePolicy().hasHeightForWidth());
        codeSkital->setSizePolicy(sizePolicy2);
        codeSkital->setFont(font);

        verticalLayout_2->addWidget(codeSkital);

        codeWithPassword = new QRadioButton(layoutWidget);
        codeWithPassword->setObjectName(QStringLiteral("codeWithPassword"));
        sizePolicy2.setHeightForWidth(codeWithPassword->sizePolicy().hasHeightForWidth());
        codeWithPassword->setSizePolicy(sizePolicy2);
        codeWithPassword->setFont(font);

        verticalLayout_2->addWidget(codeWithPassword);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 5, -1);
        codeProperty = new QLabel(layoutWidget);
        codeProperty->setObjectName(QStringLiteral("codeProperty"));
        sizePolicy1.setHeightForWidth(codeProperty->sizePolicy().hasHeightForWidth());
        codeProperty->setSizePolicy(sizePolicy1);
        codeProperty->setFont(font);
        codeProperty->setStyleSheet(QStringLiteral("color:#777;"));

        verticalLayout_3->addWidget(codeProperty);

        codeParametrs = new QSpinBox(layoutWidget);
        codeParametrs->setObjectName(QStringLiteral("codeParametrs"));
        sizePolicy2.setHeightForWidth(codeParametrs->sizePolicy().hasHeightForWidth());
        codeParametrs->setSizePolicy(sizePolicy2);
        codeParametrs->setMinimumSize(QSize(50, 0));
        codeParametrs->setFont(font);

        verticalLayout_3->addWidget(codeParametrs);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(-1, -1, 5, -1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        coderButton = new QPushButton(layoutWidget);
        coderButton->setObjectName(QStringLiteral("coderButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(coderButton->sizePolicy().hasHeightForWidth());
        coderButton->setSizePolicy(sizePolicy3);
        coderButton->setMinimumSize(QSize(160, 40));
        coderButton->setFont(font);
        coderButton->setStyleSheet(QLatin1String("QPushButton{color: #333;border: 1px solid #555;border-radius: 5px;border-style: outset;\n"
"background-color: rgb(208, 208, 201);padding: 5px;}\n"
"QPushButton:hover {background: qradialgradient(cx: 0.3, cy: -0.4, fx: 0.3, fy:-0.4, radius: 1.35, stop: 0 #fff, stop: 1 #bbb);}\n"
"QPushButton:pressed {border-style: inset;\n"
" background: qradialgradient(cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,radius: 1.35, stop: 0 #fff, stop: 1 #ddd);}"));

        verticalLayout_4->addWidget(coderButton);

        decoderButton = new QPushButton(layoutWidget);
        decoderButton->setObjectName(QStringLiteral("decoderButton"));
        sizePolicy3.setHeightForWidth(decoderButton->sizePolicy().hasHeightForWidth());
        decoderButton->setSizePolicy(sizePolicy3);
        decoderButton->setMinimumSize(QSize(160, 40));
        decoderButton->setFont(font);
        decoderButton->setStyleSheet(QLatin1String("QPushButton{color: #333;border: 1px solid #555;border-radius: 5px;border-style: outset;\n"
"background-color: rgb(208, 208, 201);padding: 5px;}\n"
"QPushButton:hover {background: qradialgradient(cx: 0.3, cy: -0.4, fx: 0.3, fy:-0.4, radius: 1.35, stop: 0 #fff, stop: 1 #bbb);}\n"
"QPushButton:pressed {border-style: inset;\n"
" background: qradialgradient(cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,radius: 1.35, stop: 0 #fff, stop: 1 #ddd);}"));

        verticalLayout_4->addWidget(decoderButton);


        horizontalLayout->addLayout(verticalLayout_4);

        swapButton = new QPushButton(layoutWidget);
        swapButton->setObjectName(QStringLiteral("swapButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(swapButton->sizePolicy().hasHeightForWidth());
        swapButton->setSizePolicy(sizePolicy4);
        swapButton->setMinimumSize(QSize(30, 88));
        swapButton->setBaseSize(QSize(0, 0));
        swapButton->setFont(font);
        swapButton->setStyleSheet(QLatin1String("\n"
"QPushButton{color: #333;border: 1px solid #555;border-radius: 5px;border-style: outset;\n"
"background-color:#fff;padding: 5px;background-image: url(:/arrowUp2.png);\n"
"image: url(:/arrowUp2.png);}\n"
"QPushButton:hover {background: qradialgradient(cx: 0.3, cy: -0.4, fx: 0.3, fy:-0.4, radius: 1.35, stop: 0 #fff, stop: 1 #bbb);}\n"
"QPushButton:pressed {border-style: inset;\n"
" background: qradialgradient(cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,radius: 1.35, stop: 0 #fff, stop: 1 #ddd);}"));

        horizontalLayout->addWidget(swapButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_5->setContentsMargins(-1, -1, 5, 5);
        examples = new QLabel(layoutWidget);
        examples->setObjectName(QStringLiteral("examples"));
        sizePolicy1.setHeightForWidth(examples->sizePolicy().hasHeightForWidth());
        examples->setSizePolicy(sizePolicy1);
        examples->setFont(font);
        examples->setStyleSheet(QStringLiteral("color:#777;"));

        verticalLayout_5->addWidget(examples);

        examplesVeni = new QPushButton(layoutWidget);
        examplesVeni->setObjectName(QStringLiteral("examplesVeni"));
        sizePolicy2.setHeightForWidth(examplesVeni->sizePolicy().hasHeightForWidth());
        examplesVeni->setSizePolicy(sizePolicy2);
        examplesVeni->setMinimumSize(QSize(200, 0));
        examplesVeni->setFont(font);
        examplesVeni->setStyleSheet(QLatin1String("QPushButton{color: #333;border: 1px solid #555;border-radius: 5px;border-style: outset;\n"
"background-color:#fff;padding: 5px;}\n"
"QPushButton:hover {background: qradialgradient(cx: 0.3, cy: -0.4, fx: 0.3, fy:-0.4, radius: 1.35, stop: 0 #fff, stop: 1 #bbb);}\n"
"QPushButton:pressed {border-style: inset;\n"
" background: qradialgradient(cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,radius: 1.35, stop: 0 #fff, stop: 1 #ddd);}"));

        verticalLayout_5->addWidget(examplesVeni);

        examplesBird = new QPushButton(layoutWidget);
        examplesBird->setObjectName(QStringLiteral("examplesBird"));
        sizePolicy2.setHeightForWidth(examplesBird->sizePolicy().hasHeightForWidth());
        examplesBird->setSizePolicy(sizePolicy2);
        examplesBird->setMinimumSize(QSize(200, 0));
        examplesBird->setFont(font);
        examplesBird->setStyleSheet(QLatin1String("QPushButton{color: #333;border: 1px solid #555;border-radius: 5px;border-style: outset;\n"
"background-color:#fff;padding: 5px;}\n"
"QPushButton:hover {background: qradialgradient(cx: 0.3, cy: -0.4, fx: 0.3, fy:-0.4, radius: 1.35, stop: 0 #fff, stop: 1 #bbb);}\n"
"QPushButton:pressed {border-style: inset;\n"
" background: qradialgradient(cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,radius: 1.35, stop: 0 #fff, stop: 1 #ddd);}"));

        verticalLayout_5->addWidget(examplesBird);

        examplesFire = new QPushButton(layoutWidget);
        examplesFire->setObjectName(QStringLiteral("examplesFire"));
        sizePolicy2.setHeightForWidth(examplesFire->sizePolicy().hasHeightForWidth());
        examplesFire->setSizePolicy(sizePolicy2);
        examplesFire->setMinimumSize(QSize(200, 0));
        examplesFire->setFont(font);
        examplesFire->setStyleSheet(QLatin1String("QPushButton{color: #333;border: 1px solid #555;border-radius: 5px;border-style: outset;\n"
"background-color:#fff;padding: 5px;}\n"
"QPushButton:hover {background: qradialgradient(cx: 0.3, cy: -0.4, fx: 0.3, fy:-0.4, radius: 1.35, stop: 0 #fff, stop: 1 #bbb);}\n"
"QPushButton:pressed {border-style: inset;\n"
" background: qradialgradient(cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,radius: 1.35, stop: 0 #fff, stop: 1 #ddd);}"));

        verticalLayout_5->addWidget(examplesFire);


        verticalLayout->addLayout(verticalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        metods->setText(QApplication::translate("Widget", "\320\234\320\265\321\202\320\276\320\264\321\213 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", 0));
        codeCaesar->setText(QApplication::translate("Widget", "\321\210\320\270\321\204\321\200 \320\246\320\265\320\267\320\260\321\200\321\217", 0));
        codeSkital->setText(QApplication::translate("Widget", "\321\210\320\270\321\204\321\200 \320\241\320\272\320\270\321\202\320\260\320\273\320\260", 0));
        codeWithPassword->setText(QApplication::translate("Widget", "\321\210\320\270\321\204\321\200 \321\201 \320\277\320\260\321\200\320\276\320\273\320\265\320\274", 0));
        codeProperty->setText(QApplication::translate("Widget", "\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \321\201\320\274\320\265\321\211\320\265\320\275\320\270\321\217:", 0));
        coderButton->setText(QApplication::translate("Widget", "\320\250\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        decoderButton->setText(QApplication::translate("Widget", "\320\224\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        swapButton->setText(QString());
        examples->setText(QApplication::translate("Widget", "\320\277\321\200\320\270\320\274\320\265\321\200\321\213:", 0));
        examplesVeni->setText(QApplication::translate("Widget", "VENI VIDI VICI", 0));
        examplesBird->setText(QApplication::translate("Widget", "\302\253\320\237\321\202\320\270\321\207\320\272\320\260\302\273", 0));
        examplesFire->setText(QApplication::translate("Widget", "Fire and Ice", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
