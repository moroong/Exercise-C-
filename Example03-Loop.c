/*
	File Name : Example03-Loop.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// 1 ���� 20 ������ ���� �߿���
	// 3�� ����� ����ϴ� ���α׷��� �ۼ�

	//  - �ݺ��� ���� ����
	//  - �ڵ带 �����ϱ� ���� ����

	for (int n = 1; n <= 20; n++)
	{
		if (n % 3 == 0)
			printf("n = %d\n", n);
	}

	return 0;
}