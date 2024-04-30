#include <stdio.h>
#include <conio.h> //putch

/*
*****
****
***
**
*
의 경우 줄바꿈이 5번반복되었고
출력이 5번 반복됨
*/

void main()
{
	int i, j;
	for (i = 5; i >= 0; i--)
	{
		for (j = 5; j >= 0; j--)
			printf("*");
		printf("\n");
	}
}