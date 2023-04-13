/*
	File Name : Example01-Variable.c
	Date	  : 2023.02.12

	연습 문제
	  반지름이 9인 원의 둘레와 넓이를 구한 다음
	  반지름, 둘레, 넓이를 모두 출력하는 프로그램을 작성
	  이때, 둘레와 넓이는 소수 둘째자리 까지만 출력
*/

#include <stdio.h>

int main()
{
	// 반지름을 저장하기 위한 변수
	double radius = 9;

	// 원주율을 저장하기 위한 변수
	double pi = 3.14;

	//원의 둘레을 저장하기 위한 변수
	double circumference = radius * 2 * pi;

	//원의 넓이를 저장하기 위한 변수
	double area = radius * radius * pi;

	printf("radius = %.2f\n", radius);
	printf("circumference = %.2f\n", circumference);
	printf("area = %.2f\n", area);
	printf("----------------------------\n");

	double radius = 5.15;
	// 대입연산자(=)를 통해 데이터를 저장할 때는
	// 연산된 결과 값이 저장되기 때문에
	// 반지름이 다른 값으로 설정되면 둘레와 넓이도 다시 연산해야 한다.

	double circumference = 2 * pi * radius;
	double area = pi * radius * radius;

	printf("radius = %.2f\n", radius);
	printf("circumference = %.2f\n", circumference);
	printf("area = %.2f\n", area);

	return 0;
}