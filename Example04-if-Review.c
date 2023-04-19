/*
	Fila Name   : Example04-if.c
	Date		: 2023.02.26
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� �Է� ���� ���� ���� �Ʒ� ���ǿ� ����
	// ����� ��µǵ��� ���α׷��� �ۼ�
	//  - 3�� ����� ��� : "Fizz"
	//	- 5�� ����� ��� : "Buzz"
	//  - 3�� ����̸鼭 5�� ����ΰ�� : "FizzBuzz"
	//  - �� ���� ��� : �Է� ���� ����
	//-------------------------------------------------------
	// 
	
	int num = 0;
	printf("Enter an integer >>>");
	scanf("%d", &num);

	if (num % 3 == 0 && num % 5 == 0)
		printf("FizzBuzz\n");
	else if (num % 3 == 0)
		printf("Fizz\n");
	else if (num % 5 == 0)
		printf("Buzz\n");
	else
		printf("num = %d\n", num);
	//-----------------------------------------------------
	// 0		   = ����
	// 0 ���� ���� = ��
	
	// num % 3 �� 0, 1, 2
	//	3�� ����� ���
	//	num % 3 == 0
	//  = !(num % 3)
	//   �� �������� 0 �� ��� not �����ڿ� ���� 1(��)�� �ȴ�.
	//   �� �������� 1, 2 �� ��� not �����ڿ� ���� 0(����)�� �ȴ�.

	// ���尣�� ��Ģ�� ���� ���ǽ��� �����ϰ� �ۼ��� �� �ִ�. 
	//	!A && !B = !(A || B)
	//  !A || !B = !(A && B)
	
	// if ( !(num % 3) && !(num % 5) )

	if (!(num % 3 || num % 5))
		printf("FizzBuzz\n");
	else if (!(num % 3))
		printf("Fizz\n");
	else if (!(num % 5))
		printf("Buzz\n");
	else // ���� ������ ��� �������� ���� ���
		printf("num = %d\n", num);

	return 0;
}