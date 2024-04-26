#include <stdio.h>

void main()
{
	int i;
	int hap = 0;
	for (i = 7; i <= 100; i += 7)
	{
		hap += i;
	}
	printf("sum is %d\n", hap);
}