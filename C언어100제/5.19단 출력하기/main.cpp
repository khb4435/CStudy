#include <stdio.h>
void main()
{
	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			printf("%d x %d is %d\n", i, j, i * j);
		}
	}
}

/*
이거 마다 이거 반복의 컨셉인데
이거 마다에서 마다가 i를 직접적으로 이용하는가
이거 마다에서 마다가 i를 간접적으로 이용하는가
\n마다 *반복은 i와 j를 간접적으로 이용하겠고
구구단은 i와 j를 직접적으로 이용한다.
*/