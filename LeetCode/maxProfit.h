#pragma once
#include "config.h"

class maxProfit {
    /*
                121.买卖股票的时机
        说明：
             给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。
             如果你最多只允许完成一笔交易（即买入和卖出一支股票），设计一个算法来计算你所能获取的最大利润。
        要求：
             你不能在买入股票前卖出股票。
    */
    int source(vector<int>& prices)
    {
        int days = prices.size();
        if (days <= 1)
        {
            return 0;
        }
        int res = 0;
        int left = 0;
        int right = 1;
        while (right < days) 
        {
            if (prices[left] > prices[right]) 
            {
                left = right;
            }
            else if (prices[left] < prices[right]) 
            {
                res = (prices[right] - prices[left]) > res ? (prices[right] - prices[left]) : res;
            }
            right++;
        }
        return res;
    }
};