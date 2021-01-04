#pragma once
#include "config.h"

class Solution {
public:
    int fib(int n) 
    {
        //1. µÝ¹é
        //if (n <= 1)
        //{
        //    return n;
        //}
        //else
        //{
        //    return fib(n - 1) + fib(n - 2);
        //}

        //2. µü´ú
        if (n <= 1)
        {
            return n;
        }
        int left = 0;
        int right = 1;
        int data = 2;
        while (data <= n)
        {
            int tmp = right;
            right = left + right;
            left = tmp;
            data++;
        }
        return right;
    }
};