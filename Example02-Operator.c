
#include <stdio.h>

int main()
{
	// �� ���� ������ �־�����
	// �� ������ 60�� �̻��̰ų�
	// �� ������ ����� 75 �̻����� �˻��ϴ� ���α׷� �ۼ�

	int score1 = 55;
	int score2 = 90;

	// �հ� ����
	//  1. �� ������ ���� 60�� �̻����� �˻�
	//		- ù ��° ������ 60�� �̻�
	//		- �� ��° ������ 60�� �̻�
	//  2. �� ������ ����� 70�� �̻����� �˻�
	// �� 1 ���� 2 �� �� �ϳ��� �����ϴ��� �˻�

	int condition1 = (score1 >= 60) && (score2 >= 60);

	double avg = (double)(score1 + score2) / 2;
	int condition2 = avg >= 70;
	
	int result = condition1 || condition2;
	
	printf("score1 = %d, score2 = %d\n", score1, score2);
	printf("average = %.2f\n", avg);
	printf("RESULT >>> %d\n", result);

	return 0;
}