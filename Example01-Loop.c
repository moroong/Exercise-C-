/*
	File Name : Example01-Loop.c
	Data	  : 2023. 03. 12.
*/

#include <stdio.h>

int main()
{
	// 영화 평점을 1점부터 5점까지를 표시하는 프로그램을 작성
	//  - 1에서부터 5사이의 값을 입력
	//  - 입력한 점수만큼 별(★)을 출력
	//  - 범위에 벗어난 점수를 입력받으면 다시 입력받도록 해야한다.

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
			printf("★");
		
		printf("\n");

		break;
	}

	return 0;
}