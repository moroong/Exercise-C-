/*
	File Name : Example01-Loop.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� "Beautiful Day!" �� ����� Ƚ���� �Է¹ް�
	// �Է��� �� ��ŭ ����ϴ� ���α׷��� �ۼ�

	int max = 0;
	printf("Enter a count to print>>>");
	scanf("%d", &max);

	for (int count = 0; count < max; count++) {
		printf("Beautiful Day!\n");
	}
	return 0;
}