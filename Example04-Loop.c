/*
	File Name : Example04-Loop.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// 100���� 150 ������ ���� �߿���
	// 3�� ����̰ų� 5�� ����� ��������
	// ��� ����ϴ� ���α׷��� �ۼ�

	for (int n = 100; n <= 150; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			printf("n = %d\n", n);
	}

	return 0;
}