// Copyright 2022 UNN-IASR
#include "fun.h"
#include <stdio.h>
#include <math.h>
#include <cctype>
#include <cstring>
#include <sstream>
#include <string>
#include <iostream>


unsigned int faStr1(const char* str) {
    int Quantity = 0;
    bool Theword = false;
    bool WNumb = false;
    for (int i = 1; i < strlen(str); i++) {
        if (i != 1 && str[i] == ' ' && Theword == true) {
            if (WNumb == false) {
                Quantity++;
            }
            Theword = false;
            WNumb = false;
        }
        else
            if (str[i] >= '0' && str[i] <= '9') {
            WNumb = true;
            Theword = true;
            }
        else
                if (str[i] != ' ') {
                    if (i == strlen(str) - 1 && WNumb == false) {
                        Quantity++;
                    }
                    Theword = true;
                }
    }
    return Quantity;
}

unsigned int faStr2(const char* str) {
    std::string Theword;
    std::istringstream String(str);
    int Quantity = 0;

    while (String >> Theword) {
        if (isupper(Theword[0]) && !Theword.empty()) {
            bool correct = true;
            for (size_t i = 1; i < Theword.length(); i++) {
                if (!isspace(Theword[i]) && !islower(Theword[i])) {
                    correct = false;
                    break;
                }
            }

            if (correct) {
                Quantity++;
            }
        }
    }

    return Quantity;
}

unsigned int faStr3(const char* str) {
    std::istringstream String(str);
    std::string Theword;
    int ElementsQuantity = 0;
    float ElementsAvegare = 0;

    while (String >> Theword) {
        ElementsAvegare++;
        ElementsQuantity += Theword.length();
    }

    ElementsAvegare = round(ElementsQuantity / ElementsAvegare);

    return ElementsAvegare;
}
