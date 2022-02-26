#include "logic.h"

QString logic::codCaesar(int textSize, QString actualText, int valueCaesar)
{
    for (int i = 0; i < textSize; ++i) {
        int x = actualText[i].unicode();
        if (((64 < x) && (x < 91)) || ((96 < x) && (x < 123)) || ((1039 < x) && (x < 1104))) {
            if (((1040 <= x) && (x <= 1071)) && ((x + valueCaesar) > 1071)) {
                x -= 32;
            } //если А-Я
            if (((1072 <= x) && (x <= 1103)) && ((x + valueCaesar) > 1103)) {
                x -= 32;
            } //если а-я
            if (((65 <= x) && (x <= 90)) && ((x + valueCaesar) > 90)) {
                x -= 26;
            } // if A-Z
            if (((97 <= x) && (x <= 122)) && ((x + valueCaesar) > 122)) {
                x -= 26;
            } // if a-z
            textOut[i] = (QChar(x + valueCaesar));
        } else {
            textOut[i] = (QChar(x));
        }
    }
    return textOut;
}

QString logic::codSkital(int textSize, QString actualText, int valueSkital)
{
    for (int j = 0, z = 0; j < valueSkital; ++j) {
        for (int i = j; i < textSize; i += valueSkital, z++) {
            textOut[z] = actualText[i];
        }
    }
    return textOut;
}

QString logic::codWithPassword(int textSize, QString actualText, QString valueWithPassword)
{
    whatAlfaBet(valueWithPassword);
    for (int i = 0; i < textSize; ++i) {
        int x = actualText[i].unicode();
        if (((64 < x) && (x < 91)) || ((96 < x) && (x < 123)) || ((1039 < x) && (x < 1104))) {
            if (((1040 <= x) && (x <= 1071))) {
                textOut[i] = rusAlfaBetUpper[x - 1040];
            } //если А-Я
            if (((1072 <= x) && (x <= 1103))) {
                textOut[i] = rusAlfaBetLower[x - 1072];
            } //если а-я
            if (((65 <= x) && (x <= 90))) {
                textOut[i] = enAlfaBetUpper[x - 64];
            } // if A-Z
            if (((97 <= x) && (x <= 122))) {
                textOut[i] = enAlfaBetLower[x - 96];
            } // if a-z
        } else {
            textOut[i] = actualText[i];
        }
    }
    return textOut;
}

void logic::whatAlfaBet(QString valueWithPassword)
{
    if (valueWithPassword == "компьютер") {
        rusAlfaBetUpper = rusAlfaBetUpperC;
        rusAlfaBetLower = rusAlfaBetLowerC;
        enAlfaBetUpper = enAlfaBetUpperC;
        enAlfaBetLower = enAlfaBetLowerC;
    }
    if (valueWithPassword == "вишня") {
        rusAlfaBetUpper = rusAlfaBetUpperV;
        rusAlfaBetLower = rusAlfaBetLowerV;
        enAlfaBetUpper = enAlfaBetUpperV;
        enAlfaBetLower = enAlfaBetLowerV;
    }
    if (valueWithPassword == "яхонт") {
        rusAlfaBetUpper = rusAlfaBetUpperI;
        rusAlfaBetLower = rusAlfaBetLowerI;
        enAlfaBetUpper = enAlfaBetUpperI;
        enAlfaBetLower = enAlfaBetLowerI;
    }
}

QString logic::deCodCaesar(int textSize, QString encodedText, int valueCaesar)
{
    for (int i = 0; i < textSize; ++i) {
        int x = encodedText[i].unicode();
        bool y = 0;
        if (((64 < x) && (x < 91)) || ((96 < x) && (x < 123)) || ((1039 < x) && (x < 1104))) {
            if (((1040 <= x) && (x <= 1071)) && ((x - valueCaesar) < 1040)) {
                x += 32;
                y = 1;
            } //если А-Я
            if (((1072 <= x) && (x <= 1103)) && ((x - valueCaesar) < 1072) && (y == 0)) {
                x += 32;
            } //если а-я
            if (((65 <= x) && (x <= 90)) && ((x - valueCaesar) < 65)) {
                x += 26;
            } // if A-Z
            if (((97 <= x) && (x <= 122)) && ((x - valueCaesar) < 97)) {
                x += 26;
            } // if a-z
            y = 0;
            decodedTextOut[i] = (QChar(x - valueCaesar));
        } else {
            decodedTextOut[i] = (QChar(x));
        }
    }
    return decodedTextOut;
}

QString logic::deCodSkital(int textSize, QString encodedText, int valueSkital)
{
    int z = 0;
    int divide = 1;
    divide = textSize / valueSkital;
    if (textSize % 2 == 0 && valueSkital % 2 == 0 && valueSkital != 4) { // if 2
        for (int j = 0; j < divide; ++j) {
            for (int i = j; i < textSize; i += divide) {
                decodedTextOut[z] = encodedText[i];
                z++;
                if (z == textSize) {
                    break;
                }
            }
            if (z == textSize) {
                break;
            }
        }
    }
    if (textSize % 2 != 0 && valueSkital % 2 == 0 && valueSkital != 4) { // if 2 нечетное
        for (int j = 0; j < divide + 1; ++j) {
            for (int i = j; i < textSize; i += divide + 1) {
                decodedTextOut[z] = encodedText[i];
                z++;
                if (z == textSize)
                    break;
            }
            if (z == textSize)
                break;
        }
    }
    if (textSize % 4 == 0 && valueSkital == 4) { // if 4
        for (int j = 0; j < divide; ++j) {
            for (int i = j; i < textSize; i += divide) {
                decodedTextOut[z] = encodedText[i];
                z++;
                if (z == textSize) {
                    break;
                }
            }
            if (z == textSize) {
                break;
            }
        }
    }
    if (valueSkital == 4 && textSize % 4 == 1) { // if 4 остаток 1
        for (int j = 0; j < divide + 1; ++j) {
            decodedTextOut[z] = encodedText[j];
            z++;
            if (z == textSize)
                break;
            int df = j + divide + 1;
            for (int i = 0; i < 3; ++i) {
                if (i == 0) {
                    decodedTextOut[z] = encodedText[j + divide + 1];
                    z++;
                    if (z == textSize)
                        break;
                } else {
                    decodedTextOut[z] = encodedText[df + divide];
                    z++;
                    df += divide;
                    if (z == textSize)
                        break;
                }
                if (z == textSize)
                    break;
            }
            if (z == textSize)
                break;
        }
    }
    if (valueSkital == 4 && textSize % 4 == 2) { // if 4 остаток 2
        for (int j = 0; j < divide + 1; ++j) {
            decodedTextOut[z] = encodedText[j];
            z++;
            if (z == textSize)
                break;
            int df = j + divide * 2 + 2;
            int u = j + divide;
            for (int i = 0; i < 3; ++i) {
                if (i == 0 || i == 1) {
                    decodedTextOut[z] = encodedText[u + 1];
                    z++;
                    u += divide + 1;
                    if (z == textSize)
                        break;
                } else {
                    decodedTextOut[z] = encodedText[df + divide];
                    z++;
                    df += divide;
                    if (z == textSize)
                        break;
                }
                if (z == textSize)
                    break;
            }
            if (z == textSize)
                break;
        }
    }
    if (valueSkital == 4 && textSize % 4 == 3) { // if 4 остаток 3
        for (int j = 0; j < divide + 1; ++j) {
            decodedTextOut[z] = encodedText[j];
            z++;
            if (z == textSize)
                break;
            int u = j + divide;
            for (int i = 0; i < 3; ++i) {
                decodedTextOut[z] = encodedText[u + 1];
                z++;
                u += divide + 1;
                if (z == textSize)
                    break;
            }
            if (z == textSize)
                break;
        }
    }
    if (valueSkital == 3 && textSize % 3 == 0) { // if 3
        for (int j = 0; j < divide; ++j) {
            for (int i = 0, k = j; i < 3; ++i, k += divide) {
                decodedTextOut[z] = encodedText[k];
                z++;
                if (z == textSize)
                    break;
            }
            if (z == textSize)
                break;
        }
    }
    if (valueSkital == 3 && textSize % 3 == 1) { // if 3 остаток 1
        for (int j = 0; j < divide + 1; ++j) {
            for (int i = 0, k = j; i < 3; ++i, k += divide) {
                if (i == 0) {
                    decodedTextOut[z] = encodedText[k];
                    z++;
                    k++;
                    if (z == textSize)
                        break;
                } else {
                    decodedTextOut[z] = encodedText[k];
                    z++;
                    if (z == textSize)
                        break;
                }
                if (z == textSize)
                    break;
            }
        }
    }
    if (valueSkital == 3 && textSize % 3 == 2) { // if 3 остаток 2
        for (int j = 0; j < divide + 1; ++j) {
            for (int i = 0, k = j; i < 3; ++i, k += divide) {
                if (i == 0 || i == 1) {
                    decodedTextOut[z] = encodedText[k];
                    z++;
                    k++;
                    if (z == textSize)
                        break;
                } else {
                    decodedTextOut[z] = encodedText[k];
                    z++;
                    if (z == textSize)
                        break;
                }
                if (z == textSize)
                    break;
            }
        }
    }
    return decodedTextOut;
}

QString logic::deCodWithPassword(int textSize, QString encodedText, QString valueWithPassword)
{
    whatAlfaBet(valueWithPassword);
    for (int i = 0; i < textSize; ++i) {
        int x = encodedText[i].unicode();
        if (((64 < x) && (x < 91)) || ((96 < x) && (x < 123)) || ((1039 < x) && (x < 1104))) {
            if (((1040 <= x) && (x <= 1071))) { //если А-Я
                int y = 0;
                while (encodedText[i] != rusAlfaBetUpper[y]) {
                    y++;
                }
                decodedTextOut[i] = QChar(y + 1040);
            }
            if (((1072 <= x) && (x <= 1103))) { //если а-я
                int y = 0;
                while (encodedText[i] != rusAlfaBetLower[y]) {
                    y++;
                }
                decodedTextOut[i] = QChar(y + 1072);
            }
            if (((65 <= x) && (x <= 90))) { // if A-Z
                int y = 0;
                while (encodedText[i] != enAlfaBetUpper[y]) {
                    y++;
                }
                decodedTextOut[i] = QChar(y + 64);
            }
            if (((97 <= x) && (x <= 122))) { // if a-z
                int y = 0;
                while (encodedText[i] != enAlfaBetLower[y]) {
                    y++;
                }
                decodedTextOut[i] = QChar(y + 96);
            }
        } else {
            decodedTextOut[i] = encodedText[i];
        }
    }
    return decodedTextOut;
}
