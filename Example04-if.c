/*
	Fila Name   : Example04-if.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// ����ڰ� �Է��� ���� ���� ������ ���(positive number)���� 
	// �ƴ��� ����ϴ� ���α׷��� �ۼ�

	// ����� ���		: "num is positive number!" ���
	// �׷��� ���� ��� : "num is not positive number!" ���
	
	int num = 0;
	printf("���ڸ� �Է��ϼ���>>>");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("num is positive number!");
	}
	else
	{
		printf("num is not positive number!");
	}

	return 0;
}