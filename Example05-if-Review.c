/*
	File Name : Example05-if.c
	Data	  : 2023. 0. 0.
*/

#include <stdio.h>

int main()
{
	// ����ڷκ��� �ð�(��� ���)�� �Է��� �ް�
	// 45�� ���� �ð��� ���
	//	24�ð� ���� �� 00 : 00 ~ 23:59
	// ����
	//	 5 20 �� 04 35
	//	 5 50 �� 05 05
	//	 0 30 �� 23 45

	int hour = 0, minute = 0;
	int timer = 45;

	printf("Enter a time >>>");
	scanf("%d %d", &hour, &minute);
	/*
	if (minute >= timer) {
		printf("%02d : %02d\n", hour, minute - timer);
	}
	else if (hour > 0) {
		printf("%02d : %02d\n", hour-1, minute - timer + 60);
	}
	else if (hour == 0) {
		printf("%02d : %02d\n", 23, minute - timer + 60);
	}
	*/
	minute -= timer;

	if (minute < 0)
	{
		minute += 60;
		
		// ���� ������
		//  ���ǿ� ���� ���� �����ϱ� ���� ������

		// �ð��� ������ ��
		//  1 �̻��̸� ���� �ð����� -1�� �ϰ�
		//  0 �̸� 23���� ����
		hour = (hour > 0) ? hour - 1 : 23;
	}

	printf("%02d : %02d\n", hour, minute);


	return 0;
}