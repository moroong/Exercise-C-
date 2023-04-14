

#include <stdio.h>

int main()
{
	// 임의의 두 정수 중 큰 값을 출력하는 프로그램을 작성
	
	int a = 35, b = 20;
	// 내 답변
	// printf("%d와 %d 중에 더 큰 값은? >>> %d\n", a, b, (a > b ? a : b));

	// 강사님 답안

	int greater = a > b ? a : b;
	int smaller = a < b ? a : b;
	printf("The greater of %d and %d is %d.\n", a, b, greater);
	printf("The samller of %d and %d is %d.\n", a, b, smaller);

	return 0;
}