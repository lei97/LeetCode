#include <vector>


using std::vector;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        std::vector<int> data = digits;

        int pos = digits.size() - 1;

        while (pos >= 0)
        {
            data[pos]++;
            if (data[pos] == 10) {
                data[pos] = 0;
                if (pos == 0) {
                    data.insert(data.begin(), 1);
                    break;
                }
                pos--;
            }
            else {
                break;
            }
        }
        return data;
    }
};