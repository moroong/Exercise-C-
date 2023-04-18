/*
	Fila Name   : Example05-if.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� ���� ������ �Է��� �ް�
	// ������ ¦������ Ȧ������ ����ϴ� ���α׷��� �ۼ�
	//  ¦��(even number)	: 2�� ����� ��
	//  Ȧ��(odd number)	: 2�� ����� �ƴ� ��

	// ������ ������  : %
	// ���� ������    : =
	// ��� �� ���� : == 
	
	int num = 0;
	printf("Enter a positive number>>>");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("num is even number!\n");
	}
	else
	{
		printf("num is odd number!\n"); 
	}

	//------------------------------------
	// ��(true)	   = 1
	// ����(false) = 0
	// 0 ���� ���� = ��(true)
	// 0		   = ����(false)
	if (!(num % 2))
	{
		printf("num is even number!\n");
	}
	else
	{
		printf("num is odd number!\n");
	}
	
	return 0;
}