//#include "removeElement.h"
//#include "findMedianSortedArrays.h"
//#include "reverse.h"
//#include "reverseList.h"
//#include "reverseWords.h"
//#include "productExceptSelf.h"
//#include "containsDuplicate.h"
#include "dbg.h"
#include "m_29.h"
// You can use "dbg(..)" in expressions:
int factorial(int n) {
	if (dbg(n <= 1)) {
		return dbg(1);
	}
	else {
		return dbg(n * factorial(n - 1));
	}
}

int main()
{
    vector<vector<int>> a{ {1,2,3},{5,6,7},{9,10,11} };
    //vector<vector<int>> a{ {6,9,7} };
    //vector<vector<int>> a{ {2} };

    //vector<vector<int>> a{ {3}, {2} };

    Solution b;
    b.spiralOrder(a);
    return 0;
}