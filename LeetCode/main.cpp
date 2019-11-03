#include "removeElement.h"
#include "findMedianSortedArrays.h"
#include "reverse.h"
#include "reverseList.h"
#include "reverseWords.h"
#include "productExceptSelf.h"
#include "containsDuplicate.h"
#include "dbg.h"

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
	std::string message = "hello";
	dbg(message);  // [example.cpp:15 (main)] message = "hello" (std::string)
	factorial(10);
	containsDuplicate ctd;
	vector<int> data{ 1, 2, 3, 1 };
	ctd.source(data);
    return 0;
}