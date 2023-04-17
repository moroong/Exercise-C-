/*
	Fila Name   : Example02-Input.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 정수 형태의 점수 3개를 입력을 받고
	// 평균을 구하는 프로그램을 작성
	//  - 점수 3개와 평균(소수 둘째자리까지)을 출력

	int score1 = 0, score2 = 0, score3 = 0;
	double avg = 0;

	printf("Enter three scores >>> ");
	scanf("%d %d %d", &score1, &score2, &score3);
	
	avg = (double)(score1 + score2 + score3) / 3;
	
	printf("scores = %d %d %d\n", score1, score2, score3);
	printf("average = %.2f\n", avg);

	return 0;
}