/*
	Fila Name   : Example06-if.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// �� ���� ������ �Է��� �ް�
	// �� ������ ���̸� ���� ������ ����ϴ� ���α׷��� �ۼ�
	
	int a = 0, b = 0;
	int diff = 0;

	printf(" Enter two integers >>> ");
	scanf("%d %d", &a, &b);

	diff = a - b;

	if (diff < 0)
	{
		diff *= -1;
	}
	
	printf("|%d-%d|=%d\n", a, b, diff);

	return 0;
}