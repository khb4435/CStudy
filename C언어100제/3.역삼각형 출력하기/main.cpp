#include <stdio.h>
#include <conio.h> //putch

/*
*****
****
***
**
*
의 경우 줄바꿈이 5번반복되었고 (i가 \n)
그 각 줄바꿈마다(각 i마다) *를 반복해서 찍는다. (j가 *)
*/

void main()
{
	int i, j;
	for (i = 5; i >= 0; i--)
	{
		for (j=i-1; j >= 0; j--) //시작 수가 상수가 아님을 유의 그러니까 반복해서 *를 찍는건 맞는데 개수가 달라지므로 상수면안됌
			printf("*");
		printf("\n");
	}
}

