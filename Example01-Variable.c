/*
	File Name : Example01-Variable.c
	Date	  : 2023.02.12

	���� ����
	  �������� 9�� ���� �ѷ��� ���̸� ���� ����
	  ������, �ѷ�, ���̸� ��� ����ϴ� ���α׷��� �ۼ�
	  �̶�, �ѷ��� ���̴� �Ҽ� ��°�ڸ� ������ ���
*/

#include <stdio.h>

int main()
{
	// �������� �����ϱ� ���� ����
	double radius = 9;

	// �������� �����ϱ� ���� ����
	double pi = 3.14;

	//���� �ѷ��� �����ϱ� ���� ����
	double circumference = radius * 2 * pi;

	//���� ���̸� �����ϱ� ���� ����
	double area = radius * radius * pi;

	printf("radius = %.2f\n", radius);
	printf("circumference = %.2f\n", circumference);
	printf("area = %.2f\n", area);
	printf("----------------------------\n");

	double radius = 5.15;
	// ���Կ�����(=)�� ���� �����͸� ������ ����
	// ����� ��� ���� ����Ǳ� ������
	// �������� �ٸ� ������ �����Ǹ� �ѷ��� ���̵� �ٽ� �����ؾ� �Ѵ�.

	double circumference = 2 * pi * radius;
	double area = pi * radius * radius;

	printf("radius = %.2f\n", radius);
	printf("circumference = %.2f\n", circumference);
	printf("area = %.2f\n", area);

	return 0;
}