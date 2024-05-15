// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

using namespace std;

int main() {
    const char* str1 = "qwe12 qwe1 qe qwe qw ";
    const char* str2 = " qweq2 ";
    const char* str3 = "Good morning";
    const char* str4 = "Hello, world!";
    const char* str5 = "hi may";
    const char* str6 = "Hello world";
    cout << faStr1(str1) << std::endl;
    cout << faStr1(str2) << std::endl;
    cout << faStr2(str3) << std::endl;
    cout << faStr2(str4) << std::endl;
    cout << faStr3(str5) << std::endl;
    cout << faStr3(str6) << std::endl;
    return 0;
}
