/*
	Fila Name   : Example03-Input.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� 3 ���� ������ �Է��� �ް�
	// �Է¹��� ���� �߿��� ���� ū ���� ���ϴ� ���α׷��� �ۼ�
	//  - ���� �����ڸ� Ȱ��
	
	int num1, num2, num3;
	int max = 0;
	printf("Enter three integers >>>");
	scanf("%d %d %d", &num1, &num2, &num3);

	max = num1 > num2 ? num1 : num2;
	max = max > num3 ? max : num3;

	printf("max = %d", max);


	return 0;
}