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
	char ksj[10];
	while (i < 128)
	{
		printf("%d\t", i);
		printf("%c\t", i); //�ƽ�Ű�ڵ� 10���� ������ ���Ѵ�
		printf("%x\t", i);
		printf("%o\t", i);
		_itoa_s(i, ksj, 2);
		//printf("%s", ksj);
		//(��ȯ�ϴ� ����,���ڿ� ,�ٲٰ� ���� ����)�� itoa�μ��� �� ����� ��
		printf("\n");
		i++;
	}
	return 0;
}
