#include <stdio.h>
/*
이건 5번 scnaf(%d,&value);
하고 싶은것
*/
void main()
{
	int value;
	int sum = 0;
	for (int i = 1; i < 6; i++)
	{
		scanf_s("%d", &value);
		sum += value;
	}
	printf("sum is %d\n", sum);
}

/*
이거 마다 이거 반복의 컨셉인데
이거 마다에서 마다가 i를 직접적으로 이용하는가
이거 마다에서 마다가 i를 간접적으로 이용하는가
\n마다* 반복은 i와 j를 간접적으로 이용하겠고
구구단은 i와 j를 직접적으로 이용한다.
*/