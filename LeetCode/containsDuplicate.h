#pragma once
#include "config.h"

class containsDuplicate
{
public:
	// 题目简介：如果任何值在数组中出现至少两次，函数返回 true。
	//          如果数组中每个元素都不相同，则返回 false。
	// 输入   ：[1,2,3,1]
	// 输出   ：true

	// 
	bool source(vector<int>& nums)
	{
		int size = nums.size();
		if (size == 0)
		{
			return false;
		}
		vector<int> tmp{ nums[0] };
		for (int i = 1; i < size; i++)
		{
			for (int j = 0; j < tmp.size(); j++)
			{
				if (nums[i] == tmp[j])
					return true;
			}
			tmp.push_back(nums[i]);
			//nums[i];
		}
		return false;
	}
};