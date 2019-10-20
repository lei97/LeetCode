#pragma once
#include"config.h"

class reverse 
{
public:
    int Solution(int x)
    {
        // 41 -> 1,4
        vector<int> num;
        long long number = x;
        while (number)
        {
            num.push_back(number % 10);
            number = number / 10;
        }
        number = 0;
        for (int i = 0; i < num.size(); i++)
        {
            number = number * 10 + num[i];
        }
        if ((number > INT32_MAX) || (number < INT32_MIN))
        {
            number = 0;
        }
        return number;
    }
};
