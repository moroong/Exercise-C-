/*
	File Name : Example01-if.c
	Data	  : 2023. 02. 25.
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� ���� �ϳ��� �Է��� �ް�
	// �Է¹��� ������ 50 �̻��� 7�� ����̸� "Wonderful Day!" �� ���
	// �׷��� ������ "Beautiful Day!" �� ����ϴ� ���α׷��� �ۼ�

	int a = 0;

	printf("Enter an integer >>>");
	scanf("%d", &a);

	if (a >= 50 && a % 7 == 0)
	{
		printf("Wonderful Day!\n");
	}
	else
	{
		printf("Beautiful Day!");
	}
	

	return 0;
}