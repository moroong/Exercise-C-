/*
	File Name : Example02-Operator.c
	Data	  : 2023. 02. 18
*/

#include <stdio.h>

int main()
{
	// 1. �� ���� ������ ����� 80�� �̻����� �˻��ϴ� ���α׷��� �ۼ�
	int score1 = 86;
	int score2 = 77;

	// �� ������ ���
	double average = (double)(score1 + score2) / 2;
	printf("score 1 = %d, score 2 = %d\n", score1, score2);
	printf("average = %.2f\n", average);
	printf("Result > %d\n", average >= 80);

	//---------------------------------------------------------------
	// 2. ���� ������ 3�� ������� �˻��ϴ� ���α׷��� �ۼ�
	int num = 31233;

	printf("%d is multiple of 3 �� %d\n", num, num % 3 == 0);


	return 0;
}