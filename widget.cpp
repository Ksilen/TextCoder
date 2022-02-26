#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->horizontalLayout_2);
    this->setWindowTitle("Кодировка текста");
    this->setFont(QFont("Times", 14));
    generalSettings();
    settingsForCodeParametrs();
    coderButton();
    decoderButton();
    swapButton();
    examples();
}

void Widget::generalSettings()
{
    ui->codeCaesar->setChecked(true);
    ui->codeParametrs->setValue(2);
    ui->codeParametrs->setMinimum(1);
    ui->codeParametrs->setMaximum(10);
    QStringList words;
    words << "компьютер"
          << "вишня"
          << "яхонт";
    wordsForCoder = new QComboBox(this);
    wordsForCoder->addItems(words);
    wordsForCoder->setMinimumHeight(29);
    wordsForCoder->hide();
    ui->verticalLayout_3->addWidget(wordsForCoder);
}

void Widget::settingsForCodeParametrs()
{
    connect(ui->codeCaesar, &QPushButton::clicked,
        [=]() {
            ui->codeParametrs->show();
            ui->codeParametrs->setMinimum(1);
            ui->codeParametrs->setMaximum(10);
            wordsForCoder->hide();
        });
    connect(ui->codeSkital, &QPushButton::clicked,
        [=]() {
            ui->codeParametrs->show();
            ui->codeParametrs->setMinimum(2);
            ui->codeParametrs->setMaximum(4);
            wordsForCoder->hide();
        });
    connect(ui->codeWithPassword, &QPushButton::clicked,
        [=]() {
            ui->codeParametrs->hide();
            wordsForCoder->show();
        });
}

void Widget::coderButton()
{
    connect(ui->coderButton, &QPushButton::clicked,
        [=]() {
            ui->textForDecode->setText(0);
            int textSize = ui->textForCode->toPlainText().size();
            QString actualText = ui->textForCode->toPlainText();
            encodedText.clear();
            logicObj.textOut.clear();
            if (ui->codeCaesar->isChecked()) { //Цезарь
                int valueCaesar = ui->codeParametrs->value();
                encodedText = logicObj.codCaesar(textSize, actualText, valueCaesar);
            }
            if (ui->codeSkital->isChecked()) { //Скитал
                int valueSkital = ui->codeParametrs->value();
                encodedText = logicObj.codSkital(textSize, actualText, valueSkital);
            }
            if (ui->codeWithPassword->isChecked()) { //кодовое слово
                QString valueWithPassword = wordsForCoder->currentText();
                encodedText = logicObj.codWithPassword(textSize, actualText, valueWithPassword);
            }
            ui->textForDecode->setText(encodedText);
        });
}

void Widget::decoderButton()
{
    connect(ui->decoderButton, &QPushButton::clicked,
        [=]() {
            ui->textForDecode->setText(0);
            int textSize = ui->textForCode->toPlainText().size();
            encodedText.clear();
            logicObj.decodedTextOut.clear();
            encodedText = ui->textForCode->toPlainText();
            decodedText.clear();
            if (ui->codeCaesar->isChecked()) { //Цезарь
                int valueCaesar = ui->codeParametrs->value();
                decodedText = logicObj.deCodCaesar(textSize, encodedText, valueCaesar);
            }
            if (ui->codeSkital->isChecked()) { //Скитал
                int valueSkital = ui->codeParametrs->value();
                decodedText = logicObj.deCodSkital(textSize, encodedText, valueSkital);
            }
            if (ui->codeWithPassword->isChecked()) { //Шифр с паролем
                QString valueWithPassword = wordsForCoder->currentText();
                decodedText = logicObj.deCodWithPassword(textSize, encodedText, valueWithPassword);
            }
            ui->textForDecode->setText(decodedText);
        });
}

void Widget::swapButton()
{
    connect(ui->swapButton, &QPushButton::clicked,
        [=]() {
            ui->textForCode->setText(0);
            ui->textForCode->setText(ui->textForDecode->toPlainText());
            ui->textForDecode->setText(0);
        });
}
void Widget::examples()
{
    connect(ui->examplesVeni, &QPushButton::clicked,
        [=]() {
            ui->textForCode->setText(0);
            ui->textForDecode->setText(0);
            ui->textForCode->setText(veniVedi);
            ui->coderButton->click();
        });
    connect(ui->examplesBird, &QPushButton::clicked,
        [=]() {
            ui->textForCode->setText(0);
            ui->textForDecode->setText(0);
            ui->textForCode->setText(bird);
            ui->coderButton->click();
        });
    connect(ui->examplesFire, &QPushButton::clicked,
        [=]() {
            ui->textForCode->setText(0);
            ui->textForDecode->setText(0);
            ui->textForCode->setText(fire);
            ui->coderButton->click();
        });
}

Widget::~Widget()
{
    delete wordsForCoder;
    delete ui;
}
