#ifndef WIDGET_H
#define WIDGET_H

#include "logic.h"
#include <QComboBox>
#include <QWidget>
namespace Ui {
class Widget;
}
class Widget : public QWidget {
    Q_OBJECT
public:
    explicit Widget(QWidget* parent = 0);
    ~Widget() override;

private:
    Ui::Widget* ui;
    void generalSettings();
    void settingsForCodeParametrs();
    void coderButton();
    void decoderButton();
    void swapButton();
    void examples();
    logic logicObj;
    QComboBox* wordsForCoder;
    QString encodedText;
    QString decodedText;
};

#endif // WIDGET_H
