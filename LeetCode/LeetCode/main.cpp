#include"removeElement.h"
#include"findMedianSortedArrays.h"

int main()
{
    findMedianSortedArrays Find;
    vector<int> test;
    vector<int> test2;
    test2.push_back(2);
    //test2.push_back(4);
    //test2.push_back(6);
    int num;
    double dou1;
    removeElement RemoveElement;
    test.push_back(1);
    test.push_back(3);
    //test.push_back(3);
    //test.push_back(5);
    //num = RemoveElement.Solution(test,1);
    dou1 = Find.Solution(test, test2);
    getchar();
    return 0;
}