/*
72) 0���� 127 �ڿ����� 1����
decimal, char, hexa, octal, binary
��stdlib,itoa()�̿�,���� ǥ��.

�յ� printf("(dec)(char)(oct)(hex)(bin)\n");
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char ksj2[10], ksj3[10], ksj5[10], ksj7[10], ksj9[10];
	while (i < 128)
	{
		printf("%d\t", i);
		printf("%c\t", i); //�ƽ�Ű�ڵ� 10���� ������ ���Ѵ�
		printf("%x\t", i);
		printf("%o\t", i);
		_itoa_s(i, ksj2, 2);
		_itoa_s(i, ksj3, 3);
		_itoa_s(i, ksj5, 5);
		_itoa_s(i, ksj7, 7);
		_itoa_s(i, ksj9, 9);

		printf("%5s ", ksj2);
		printf("%5s ", ksj3);
		printf("%5s ", ksj5);
		printf("%5s ", ksj7);
		printf("%5s ", ksj9);
		
		//printf("%s", ksj);
		//(��ȯ�ϴ� ����,���ڿ� ,�ٲٰ� ���� ����)�� itoa�μ��� �� ����� ��
		printf("\n");
		i++;
	}
	return 0;
}
