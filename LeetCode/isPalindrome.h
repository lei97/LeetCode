#pragma once
#include"config.h"

class isPalindrome {
public:
    /*
            9. 回文数
        说明：
             判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
    */
    bool source(int x)
    {
        if (x < 0)
        {
            return false;
        }
        unsigned int n = 0; 
        int tmp = x;
        while (tmp)
        {
            n = n * 10 + tmp % 10;
            tmp = tmp / 10;
        }
        return x == n;
    }
};