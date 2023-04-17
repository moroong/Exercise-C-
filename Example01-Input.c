/*
	Fila Name   : Example01-Input.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 사각형의 너비와 높이를 입력을 받고
	// 사각형의 둘레와 넓이를 구하는 프로그램을 작성
	//  → 사각형의 너비, 높이, 둘레, 넓이를 출력

	int width = 0, height = 0; 
	int perimeter = 0;
	int area = 0;

	printf("사각형의 너비와 높이를 입력하세요 >>>");
	scanf("%d %d", &width, &height);

	perimeter = (width + height) * 2;
	area = width * height;

	printf("width = %d, height = %d\n", width, height);
	printf("perimeter = %d\n", perimeter);
	printf("area = %d\n", area);



	return 0;
}