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

/*
이거 마다 이거 반복의 컨셉인데
이거 마다에서 마다가 i를 직접적으로 이용하는가
이거 마다에서 마다가 i를 간접적으로 이용하는가
\n마다 *반복은 i와 j를 간접적으로 이용하겠고
구구단은 i와 j를 직접적으로 이용한다.
*/