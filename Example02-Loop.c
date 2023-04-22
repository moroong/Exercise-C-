/*
	File Name : Example02-Loop.c
	Data	  : 2023. 03. 12.
*/

#include <stdio.h>

int main()
{
	// �Ҽ�(Prime number)
	//  : ����� 1�� �ڱ� �ڽŻ��� 1���� ū �ڿ���
	//    �� 2, 3, 5, 7, 11 ...
	//  : 1�� �ڱ� �ڽ��� ������ �ٸ� �ڿ����� ������ ��������
	//	  �Ҽ��� �ƴϴ�.
	
	// �Ҽ����� �Ǻ��ϴ� ���α׷��� �ۼ�
	//  - ����ڰ� ���Ƿ� �Է��� 2 �̻��� �ڿ����� �Է�
	//  - ����ڰ� �Է��� �ڿ����� �Ҽ����� �ƴ��� ���
	
	// �÷��� ����(flag variable)
	//  - Ư�� ���¸� ��Ÿ���� ���� ����
	int is_prime = 1;  // �Ҽ����� �ƴ��� �Ǻ��ϱ� ���� ����
	// 1 : �Ҽ��� ���
	// 0 : �Ҽ��� �ƴ� ���

	int num = 0;

	printf("Enter a positive number greater than 1 >>>");
	scanf("%d", &num);
	printf("\n");

	// �Է� ���� 1�� �ڱ� �ڽ� ������ ������ �������
	// ������ ���������� �˻�
	//  �� ����� ã�� ���� 2���� num�� �����ٱ����� �ڿ����鸸 �˻�
	for (int n = 2; n * n <= num; n++)
	{
		if (num % n == 0)
		{
			is_prime = 0;
			break;
		}
	}

	if (is_prime)  // == 1
		printf("%d is a prime number\n", num);
	else		   // == 0
		printf("%d is not a prime number\n", num);
	
	return 0;
}