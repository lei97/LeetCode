#pragma once
#include"config.h"

class isPalindrome {
public:
    /*
            9. ������
        ˵����
             �ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
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