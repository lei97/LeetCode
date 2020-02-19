#pragma once
#include "config.h"
#include <math.h>
/*
        面试题64. 求1+2+…+n
    说明：求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case
         等关键字及条件判断语句（A?B:C）。
*/
class Solution {
public:
    int sumNums(int n) {
        return (int)(std::pow(n, 2) + n) >> 1;
    }
};