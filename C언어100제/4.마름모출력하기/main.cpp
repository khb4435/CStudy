/*
 
##*
#***
*****
#***
##*

*/

#include <stdio.h>
void main()
{
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 1-i; j++)
		{
			printf("#");
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}