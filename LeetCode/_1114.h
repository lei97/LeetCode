#pragma once
#include"config.h"
#include <functional>
using std::function;

/*
        1114. 按序打印
说明：
    按顺序打印 first second third
*/
class Foo {
public:
    Foo() {

    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        flag_1 = true;
    }

    void second(function<void()> printSecond) {
        while (!flag_1) {}
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        flag_2 = true;
    }

    void third(function<void()> printThird) {
        while (!flag_2) {}
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }

    bool flag_1 = false;
    bool flag_2 = false;
};