#pragma once
#include "config.h"

class containsDuplicate
{
public:
	// ��Ŀ��飺����κ�ֵ�������г����������Σ��������� true��
	//          ���������ÿ��Ԫ�ض�����ͬ���򷵻� false��
	// ����   ��[1,2,3,1]
	// ���   ��true

	// ���1 �����ƽ�
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
			int j_size = tmp.size();
			for (int j = 0; j < j_size; j++)
			{
				if (nums[i] == tmp[j])
					return true;
			}
			tmp.push_back(nums[i]);
			//nums[i];
		}
		return false;
	}

	//���� 
	bool source_2(vector<int>& nums)
	{

	}
};