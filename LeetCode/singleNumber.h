#pragma once

#include "config.h"
#include <vector>

using std::vector;

class SingleNumber {
public:
	/*	
		简介：给定一个非空整数数组，除了某个元素只出现一次以外，
		其余每个元素均出现两次。找出那个只出现了一次的元素。
		要求：应该具有线性时间复杂度。 可以不使用额外空间来实现
	*/
	int solution(std::vector<int>& nums)
	{
		/*
			解题思路：
				1. 异或操作：a ^ b ^ a = b
		*/
		int size = nums.size();
		int tmp = nums[0];
		for (int i = 1; i < size; i++)
		{
			tmp = tmp ^ nums[i];
		}
	}

	/*
		测试案例：
			1. [2, 2, 1]  -> 1
			2. [4,1,2,1,2] -> 4
	*/
	bool test()
	{
		vector<int> num1{2,2,1};		
		assert(solution(num1) != 1);

		vector<int> num2{ 4, 1, 2, 1, 2 };
		assert(solution(num2) != 4);
	}
};
