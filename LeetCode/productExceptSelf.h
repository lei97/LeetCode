#pragma once
#include "config.h"

//问题： 给定长度为 n 的整数数组 nums，其中 n > 1，返回输出数组 output ，
//其中 output[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。
//输入：[1,2,3,4]
//输出：[24,12,8,6]
//要求：请不要使用除法，且在 O(n) 时间复杂度内完成此题。
//进阶：在常数空间复杂度内完成这个题目吗？（ 出于对空间复杂度分析的目的，输出数组不被视为额外空间。）

class productExceptSelf {
public:
	//解题思路
	//1、
	vector<int> source(vector<int>& nums)
	{
		int size = nums.size();
		vector<int> dataToRight(size);
		vector<int> dataToLeft(size);
		int tmp = 1;
		for (int i = 0; i < size; i++)
		{
			dataToRight[i] = tmp;
			tmp = tmp * nums[i];
		}
		tmp = 1;
		for (int i = size - 1; i >= 0; i--)
		{
			dataToLeft[i] = tmp * dataToRight[i];
			tmp = tmp * nums[i];
		}
		return dataToLeft;
	}

	void test()
	{

	}

private:
	vector<int> m_output;
};