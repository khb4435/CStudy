#include <stdio.h>

void main()
{
	int height = 100; //�칰�� ����
	int snail = 0; //�����̰� �̵��� �Ÿ�
	int count = 0; //�� ȸ���� Ż���ϴ��� ���

	while (1)
	{
		snail += 5;
		snail -= (snail >= 50) ? 2 : 1;
		count++;
		printf("(%2d)�����̰� �̵��� ���� : %2d\n",count, snail);
		if (snail >= height)
		{
			printf("%dȸ���� �칰�� Ż���Ͽ����ϴ�.\n", count);
			break;
		}
	}
}