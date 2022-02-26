#ifndef LOGIC_H
#define LOGIC_H
#include "alfabet.cpp"
#include <QString>
class logic {
public:
    QString codCaesar(int textSize, QString actualText, int valueCaesar);
    QString codSkital(int textSize, QString actualText, int valueSkital);
    QString codWithPassword(int textSize, QString actualText, QString valueWithPassword);
    QString deCodCaesar(int textSize, QString encodedText, int valueCaesar);
    QString deCodSkital(int textSize, QString encodedText, int valueSkital);
    QString deCodWithPassword(int textSize, QString encodedText, QString valueWithPassword);
    void whatAlfaBet(QString valueWithPassword);
    QString textOut;
    QString decodedTextOut;
    QString rusAlfaBetUpper;
    QString rusAlfaBetLower;
    QString enAlfaBetUpper;
    QString enAlfaBetLower;
};

#endif // LOGIC_H
