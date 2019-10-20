#pragma once
#include"config.h"

class findMedianSortedArrays {
public:
    double Solution(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> tmp;
        tmp.reserve(nums1.size() + nums2.size());
        //tmp.resize(Indata1.size() + Indata2.size());
        int i = 0;
        int j = 0;
        while (true)
        {
            if ((i < nums1.size()) && (j < nums2.size()))
            {
                if (nums1[i] > nums2[j])
                {
                    tmp.push_back(nums2[j]);
                    j++;
                }
                else
                {
                    tmp.push_back(nums1[i]);
                    i++;
                }
            }
            else
            {
                if ((i == nums1.size()) && (j == nums2.size()))
                {
                    break;
                }
                if (i == nums1.size() && (j != nums2.size()))
                {
                    tmp.push_back(nums2[j]);
                    j++;
                }
                if (j == nums2.size() && (i != nums1.size()))
                {
                    tmp.push_back(nums1[i]);
                    i++;
                }
            }
        }
        
        int num = tmp.size() / 2;
        if (tmp.size() % 2 == 0)
        {
            double test = tmp[num] + tmp[(num-1)];
            return (test/2);
        }
        else
        {
            return tmp[num];
        }
    }

    vector<int> sum(vector<int> Indata1, vector<int> Indata2)
    {
        vector<int> tmp;
        tmp.reserve(Indata1.size() + Indata2.size());
        //tmp.resize(Indata1.size() + Indata2.size());
        int i = 0;
        int j = 0;
        while (true)
        {
            if ((i < Indata1.size()) && (j < Indata2.size()))
            {
                if (Indata1[i] > Indata2[j])
                {
                    tmp.push_back(Indata2[j]);
                    j++;
                }
                else
                {
                    tmp.push_back(Indata1[i]);
                    i++;
                }
            }
            else
            {
                if ((i == Indata1.size()) && (j == Indata2.size()))
                {
                    break;
                }
                if (i == Indata1.size() && (j != Indata2.size()))
                {
                    tmp.push_back(Indata2[j]);
                    j++;
                }
                if (j == Indata2.size() && (i != Indata1.size()))
                {
                    tmp.push_back(Indata1[i]);
                    i++;
                }
            }
        }
        return tmp;
    }

};