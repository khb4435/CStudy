#include <stdio.h>
void main()
{
	int i = 1;
	while (i != 0)
	{
		printf("what is new i :");
		scanf_s("%d", &i);
		if (i % 2 == 0)
			printf("¦��\n");
		else
			printf("Ȧ��\n");
	}
}