

#include <stdio.h>

int main()
{
	// ������ �� ���� �� ū ���� ����ϴ� ���α׷��� �ۼ�
	
	int a = 35, b = 20;
	// �� �亯
	// printf("%d�� %d �߿� �� ū ����? >>> %d\n", a, b, (a > b ? a : b));

	// ����� ���

	int greater = a > b ? a : b;
	int smaller = a < b ? a : b;
	printf("The greater of %d and %d is %d.\n", a, b, greater);
	printf("The samller of %d and %d is %d.\n", a, b, smaller);

	return 0;
}