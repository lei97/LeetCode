#pragma once
#include "config.h"

class climbStairs
{
public :
    /*
        ������������¥�ݡ���Ҫ n ������ܵ���¥����
        ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥��
    */
    int source(int n)
    {
        /*
            ����˼·���ݹ�
            ���������ʱ������
        */
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        //  3:3,4:
        return source(n - 1) + source(n - 2);
    }

    /*
        ����˼·���ݹ黺�棬��ɲ���
    */
    int source1(int n)
    {
        if (n <= 2)
            return n;
        int tmp1 = 1;
        int tmp2 = 2;
        int data = 0;
        for (int i = 2; i < n; i++)
        {
            data = tmp1 + tmp2;
            tmp1 = tmp2;
            tmp2 = data;
        }
        return data;
    }
};