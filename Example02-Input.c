/*
	Fila Name   : Example02-Input.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� ���� ������ ���� 3���� �Է��� �ް�
	// ����� ���ϴ� ���α׷��� �ۼ�
	//  - ���� 3���� ���(�Ҽ� ��°�ڸ�����)�� ���

	int score1 = 0, score2 = 0, score3 = 0;
	double avg = 0;

	printf("Enter three scores >>> ");
	scanf("%d %d %d", &score1, &score2, &score3);
	
	avg = (double)(score1 + score2 + score3) / 3;
	
	printf("scores = %d %d %d\n", score1, score2, score3);
	printf("average = %.2f\n", avg);

	return 0;
}