#include <stdio.h>

void main()
{
	int height = 100; //우물의 높이
	int snail = 0; //달팽이가 이동한 거리
	int count = 0; //몇 회만에 탈출하는지 기억

	while (1)
	{
		snail += 5;
		snail -= (snail >= 50) ? 2 : 1;
		count++;
		printf("(%2d)달팽이가 이동한 높이 : %2d\n",count, snail);
		if (snail >= height)
		{
			printf("%d회만에 우물을 탈출하였습니다.\n", count);
			break;
		}
	}
}