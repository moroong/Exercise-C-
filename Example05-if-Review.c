/*
	File Name : Example05-if.c
	Data	  : 2023. 0. 0.
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 시간(몇시 몇분)을 입력을 받고
	// 45분 전의 시간을 출력
	//	24시간 기준 → 00 : 00 ~ 23:59
	// 예시
	//	 5 20 → 04 35
	//	 5 50 → 05 05
	//	 0 30 → 23 45

	int hour = 0, minute = 0;
	int timer = 45;

	printf("Enter a time >>>");
	scanf("%d %d", &hour, &minute);
	/*
	if (minute >= timer) {
		printf("%02d : %02d\n", hour, minute - timer);
	}
	else if (hour > 0) {
		printf("%02d : %02d\n", hour-1, minute - timer + 60);
	}
	else if (hour == 0) {
		printf("%02d : %02d\n", 23, minute - timer + 60);
	}
	*/
	minute -= timer;

	if (minute < 0)
	{
		minute += 60;
		
		// 조건 연산자
		//  조건에 따라 값을 결정하기 위한 연산자

		// 시간을 설정할 때
		//  1 이상이면 현재 시간에서 -1을 하고
		//  0 이면 23으로 설정
		hour = (hour > 0) ? hour - 1 : 23;
	}

	printf("%02d : %02d\n", hour, minute);


	return 0;
}