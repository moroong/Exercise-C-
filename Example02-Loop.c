/*
	File Name : Example02-Loop.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 두 개의 정수를 입력을 받고
	// 두 정수를 포함한 두 정수 사이의 모든 값들을 출력하는 프로그램을 작성
	//  - 오름차순으로 출력

	int n1, n2;
	int start, end;
	printf("Enter two integer>>>");
	scanf("%d %d", &n1, &n2);

	start = n1 < n2 ? n1 : n2;
	end = n1 > n2 ? n1 : n2;

	for (int n = start; n <= end; n++) {
		printf("n = %d\n", n);
	}


	return 0;
}