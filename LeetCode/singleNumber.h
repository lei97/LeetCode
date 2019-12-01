#pragma once

#include "config.h"
#include <vector>

using std::vector;

class SingleNumber {
public:
	/*	
		��飺����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬
		����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
		Ҫ��Ӧ�þ�������ʱ�临�Ӷȡ� ���Բ�ʹ�ö���ռ���ʵ��
	*/
	int solution(std::vector<int>& nums)
	{
		/*
			����˼·��
				1. 
				2.
		*/
		int size = nums.size();
		if (size <= 1)
		{
			return nums[0];
		}

		int tmp = nums[0];
		for (int i = 1; i < size; i++)
		{
			tmp == nums[i];
		}
	}

	/*
		���԰�����
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
