/*
	File Name : Example03-if.c
	Data	  : 2023. 02. 26.
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� ���� ������ �Է¹޾Ƽ�
	// ¦������ Ȧ������ 0���� ����ϴ� ���α׷��� �ۼ�
	//  ¦��(even number) : 2�� ����� ��
	//  Ȧ��(odd number)  : 2�� ����� �ƴ� ��

	int num = 0;

	printf("Enter a positive number>>>");
	scanf("%d", &num);


	//------������ �߰��Ͽ� �˻��ϴ� ���------

	if (num % 2 == 0)
		printf("num is even number!");
	else if (num % 2 != 0)
		printf("num is odd number!");
	else
		printf("num is zero!");
	//---������ ������ �ٲ㼭 �ۼ��ϴ� ���---

	if (num == 0)
		printf("num is zero!\n");
	else if (num % 2 == 0)
		printf("num is even number!\n");
	else
		printf("num is odd number!\n");

	return 0;
}