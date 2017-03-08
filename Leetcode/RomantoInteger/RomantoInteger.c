#include <stdlib.h>
#include <stdio.h>

int to_number(char s)
{
	switch (s)
	{
	    case 'I':
		    return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;

	}
	return 0;

}

int romanToInt(char* s) 
{
	int ret = 0;
	int i = 0;

	ret = to_number(s[0]);

	for (i = 1; i < strlen(s); i++)
	{
		if (to_number(s[i - 1]) < to_number(s[i]))
		{
			ret += to_number(s[i]) - 2 * to_number(s[i - 1]);
		}
		else
		{
			ret += to_number(s[i]);
		}
	}

	return ret;
}


int main()
{
	char *roman = "XLI";
	int ret = 0;

	ret = romanToInt(roman);
	printf("The result is %d.\n", ret);

	return 0;
}