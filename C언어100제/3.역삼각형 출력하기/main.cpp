#include <stdio.h>
#include <conio.h> //putch

/*
*****
****
***
**
*
�� ��� �ٹٲ��� 5���ݺ��Ǿ���
����� 5�� �ݺ���
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