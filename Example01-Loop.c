/*
	File Name : Example01-Loop.c
	Data	  : 2023. 03. 12.
*/

#include <stdio.h>

int main()
{
	// ��ȭ ������ 1������ 5�������� ǥ���ϴ� ���α׷��� �ۼ�
	//  - 1�������� 5������ ���� �Է�
	//  - �Է��� ������ŭ ��(��)�� ���
	//  - ������ ��� ������ �Է¹����� �ٽ� �Է¹޵��� �ؾ��Ѵ�.

	int rating = 0;
	while (1)
	{
		printf("Enter your movie rating>>>");
		scanf("%d", &rating);

		if (rating < 1 || rating > 5) {
			printf("Enter a rating between 1 and 5.\n");
			continue;
		}

		printf("Movie rating: ");
		for (int i = 0; i < rating; i++)
			printf("��");
		
		printf("\n");

		break;
	}

	return 0;
}