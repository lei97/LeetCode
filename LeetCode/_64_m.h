#pragma once
#include "config.h"
#include <math.h>
/*
        ������64. ��1+2+��+n
    ˵������ 1+2+...+n ��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case
         �ȹؼ��ּ������ж���䣨A?B:C����
*/
class Solution {
public:
    int sumNums(int n) {
        return (int)(std::pow(n, 2) + n) >> 1;
    }
};