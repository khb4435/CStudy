#include <stdio.h>
/*
�̰� 5�� scnaf(%d,&value);
�ϰ� ������
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
�̰� ���� �̰� �ݺ��� �����ε�
�̰� ���ٿ��� ���ٰ� i�� ���������� �̿��ϴ°�
�̰� ���ٿ��� ���ٰ� i�� ���������� �̿��ϴ°�
\n����* �ݺ��� i�� j�� ���������� �̿��ϰڰ�
�������� i�� j�� ���������� �̿��Ѵ�.
*/