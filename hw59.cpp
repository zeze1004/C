/*
59) ���� ���� 6�� �����迭 array�� ǥ���ϰ�, (1) �迭����, (2) ��ü �հ�, (3)�ִ밪,
(4)�ּҰ�, (5)��հ�, (6)median(�߰���), (7)ǥ������ ȭ�鿡 ǥ��
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int arr[40];
	int i = 0;
	int total=0;
	srand(time(0));

	for (i = 0; i < 6; i++)
	{
		arr[i] = rand();
		printf("[%d] = %d\n", i + 1, arr[i]);
		//total = arr[i]+arr[i];
		printf("total= %d\n", total);
	}
/*
1) �迭����, (2) ��ü �հ�, (3)�ִ밪,
(4)�ּҰ�, (5)��հ�, (6)median(�߰���), (7)ǥ������
*/
	printf("1)�迭����: %d\n", i);
	printf("2)��ü�հ�: %d\n", total);
}
