/*
�˱� text �� 0���� ���� ���� 99��° ���� ���� ���ӹ�ȣ, ����, ASCII��ȣ   ȭ�鿡 printf("(%d)... \n",i,gulja, asc); ǥ���϶�   
�� ��� �̻��� ��� ����� ã�� ������ �����϶�
*/

#include <iostream>

int main()
{
	FILE* fp = fopen("poem.txt", "r");
	if (fp == 0)
	{
		printf("error");
		return -1;
	}
	char gulga[4000];
	for (int i = 0; i < 100; i++)
	{
		
		fscanf(fp, "%c", &gulga[i]);
		int asc = gulga[i];
		printf("(%d)... %c %d \n", i, gulga[i], asc); //10 �ƽ�Ű: ����
	}
	return 0;
}