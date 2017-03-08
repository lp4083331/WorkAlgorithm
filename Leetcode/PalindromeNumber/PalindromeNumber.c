#include <stdio.h>
#include <stdlib.h>


/* C99 中已经增加了bool 类型 */
typedef int bool;

#define true 1
#define false 0

bool isPalindrome(int x) 
{
	int sum = 0;

	if (x < 0 || (x != 0 && x % 10 == 0))
	{
		return false;
	}

	while (sum < x)
	{
		sum = sum * 10 + x % 10;
		x = x / 10;
	}

	if (sum == x || x == sum / 10)
	{
		return true;
	}

	return false;
}

int main()
{
	int a = 12521;

	bool b = isPalindrome(a);
	if (b == true)
	{
		printf("is Palind.\n");
	}
	else
	{
		printf("Not Palind.\n");
	}

	return 0;
}