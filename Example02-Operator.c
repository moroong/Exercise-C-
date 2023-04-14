
#include <stdio.h>

int main()
{
	// 두 개의 점수가 주어지고
	// 각 점수가 60점 이상이거나
	// 두 점수의 평균이 75 이상인지 검사하는 프로그램 작성

	int score1 = 55;
	int score2 = 90;

	// 합격 기준
	//  1. 두 점수가 각각 60점 이상인지 검사
	//		- 첫 번째 점수가 60점 이상
	//		- 두 번째 점수가 60점 이상
	//  2. 두 점수의 평균이 70점 이상인지 검사
	// → 1 번과 2 번 중 하나라도 만족하는지 검사

	int condition1 = (score1 >= 60) && (score2 >= 60);

	double avg = (double)(score1 + score2) / 2;
	int condition2 = avg >= 70;
	
	int result = condition1 || condition2;
	
	printf("score1 = %d, score2 = %d\n", score1, score2);
	printf("average = %.2f\n", avg);
	printf("RESULT >>> %d\n", result);

	return 0;
}