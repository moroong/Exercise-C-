/*
	File Name : Example01.c
	Data	  : 2023. 00. 00.
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� �Է¹��� ������
	// ������� �������� 0���� ����ϴ� ���α׷��� �ۼ�
	//	���(positive number) : 0 ���� ū ��
	//  ����(negative number) : 0 ���� ���� ��

	int num = 0;
	printf("Enter an integer>>> ");
	scanf("%d", &num);

	if (num > 0)
		printf("num is positive number!");
	else if (num < 0)
		printf("num is negative number!");
	else
		printf("num is zero!");
	return 0;
}