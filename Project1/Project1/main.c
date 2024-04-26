//#include <stdio.h>
//
//void main()
//{
//	
//}

#include <stdio.h>

void main()
{
	int value = 1;
	while (value != 0)
	{
		printf("please set the value :");
		scanf_s("%d", &value);
		if (value % 2 == 0)
			printf("this is È¦¼ö\n");
		else
			printf("this is Â¦¼ö\n");
	}
}