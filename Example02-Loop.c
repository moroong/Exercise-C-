/*
	File Name : Example02-Loop.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� �� ���� ������ �Է��� �ް�
	// �� ������ ������ �� ���� ������ ��� ������ ����ϴ� ���α׷��� �ۼ�
	//  - ������������ ���

	int n1, n2;
	int start, end;
	printf("Enter two integer>>>");
	scanf("%d %d", &n1, &n2);

	start = n1 < n2 ? n1 : n2;
	end = n1 > n2 ? n1 : n2;

	for (int n = start; n <= end; n++) {
		printf("n = %d\n", n);
	}


	return 0;
}