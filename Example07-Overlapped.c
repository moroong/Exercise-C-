/*
	File Name : Example07-Overlapped.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// ������ 2�ܿ��� 9�ܱ��� ����ϴ� ���α׷��� �ۼ�

	// 2�� 
	//  2 * 1 = 2
	//  2 * 2 = 4
	//   ...
	//  9 * 9 = 81

	// 2�ܿ��� 9�ܱ��� �ݺ�

	for (int dan = 2; dan <= 9; dan++)
	{
		printf("======%d��======\n", dan);

		for (int n = 1; n <= 9; n++)
		{
			printf("%d*%d=%d\n", dan, n, dan*n);
		}
	}

	return 0;
}