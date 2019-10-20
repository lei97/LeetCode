#include"config.h"

class twoSum {
public:
    vector<int> Solution(vector<int>& nums, int target) {
        int _size = nums.size();
        vector<int> data;
        for (int i = 0; i < _size - 1; i++)
        {
            for (int j = i + 1; j < _size; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    data.push_back(i);
                    data.push_back(j);
                    return data;
                }
            }
        }
        return data;
    }
};
