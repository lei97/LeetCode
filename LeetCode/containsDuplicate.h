#pragma once
#include "config.h"

class containsDuplicate
{
public:
	// ��Ŀ��飺����κ�ֵ�������г����������Σ��������� true��
	//          ���������ÿ��Ԫ�ض�����ͬ���򷵻� false��
	// ����   ��[1,2,3,1]
	// ���   ��true

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