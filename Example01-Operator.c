

#include <stdio.h>

int main()
{
	// 임의의 정수가 50이상의 3의 배수인지 검사하는 프로그램을 작성
	//	- n 의 값이 50 이상인지 검사
	//  - n 의 값이 4의 배수인지 검사
	//  - 위 두 조건을 모두 만족하는지 검사 → AND 연산
	int n = 153;

	int result = (n >= 50) && (n % 3 == 0);
	printf("RESULT → %d\n", result);

	return 0;
}