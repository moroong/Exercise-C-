/*
	Fila Name   : Example01-Input.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� �簢���� �ʺ�� ���̸� �Է��� �ް�
	// �簢���� �ѷ��� ���̸� ���ϴ� ���α׷��� �ۼ�
	//  �� �簢���� �ʺ�, ����, �ѷ�, ���̸� ���

	int width = 0, height = 0; 
	int perimeter = 0;
	int area = 0;

	printf("�簢���� �ʺ�� ���̸� �Է��ϼ��� >>>");
	scanf("%d %d", &width, &height);

	perimeter = (width + height) * 2;
	area = width * height;

	printf("width = %d, height = %d\n", width, height);
	printf("perimeter = %d\n", perimeter);
	printf("area = %d\n", area);



	return 0;
}