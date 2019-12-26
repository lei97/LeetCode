#pragma once
#include "config.h"

class climbStairs
{
public :
    /*
        假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
        每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶
    */
    int source(int n)
    {
        /*
            解题思路：递归
            结果：超出时间限制
        */
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        //  3:3,4:
        return source(n - 1) + source(n - 2);
    }

    /*
        解题思路：递归缓存，完成测试
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