/*
�ڿ��� main(){scanf();} �о� 3���� �������� string munjapoint return munjapoint;�ִ�
�����_�Լ� char* spmok(){ return return munjapoint;} �޾� ǥ��*/

#include <stdio.h>

char* spmok(int returnNum)
{
	printf("%c\n", returnNum);
	return 0;
}
int main()
{
	int num;
	printf("���� �Է��Ͻÿ�: ");
	scanf_s("%d\n", &num);
	num = num / 3;
	spmok(num);

	printf("num: %d\t%c", num, num);
}