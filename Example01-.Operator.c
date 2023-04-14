/*
	File Name : Example02-Operator.c
	Data	  : 2023. 02. 18
*/

#include <stdio.h>

int main()
{
	// 1. 두 개의 점수이 평균이 80점 이상인지 검사하는 프로그램을 작성
	int score1 = 86;
	int score2 = 77;

	// 두 점수의 평균
	double average = (double)(score1 + score2) / 2;
	printf("score 1 = %d, score 2 = %d\n", score1, score2);
	printf("average = %.2f\n", average);
	printf("Result > %d\n", average >= 80);

	//---------------------------------------------------------------
	// 2. 임의 정수가 3의 배수인지 검사하는 프로그램을 작성
	int num = 31233;

	printf("%d is multiple of 3 → %d\n", num, num % 3 == 0);


	return 0;
}