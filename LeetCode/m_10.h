#pragma once

/*
            面试题10- I. 斐波那契数列
    说明：
         F(0) = 0,   F(1) = 1
         F(N) = F(N - 1) + F(N - 2), 其中 N > 1.
*/
class Solution {
public:
    int fib(int n) 
    {
        if (n == 0 || n == 1)
        {
            return n;
        } 
        else if (n < 0)
        {
            return 0;
        }
        else
        {
            int tmp1 = 0;
            int tmp2 = 1;
            int num = 1;
            while (num < n)
            {
                int a = tmp1;
                tmp1 = tmp2;
                tmp2 = (a + tmp2) % 1000000007;
                num = num + 1;
            }
            return tmp2;
        }
    }
};