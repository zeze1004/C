/*
������ fruit.txt ���� �ӿ� ���� ���� �̸� (1) ����, (2)���ϸ�, (3)���ܾ�spell���� ǥ��
no strlen
+��ٷ�
+���� ���̿� , ���̱�
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	int ret, read;
	int i = 0;
	char frname[100][50] = { 0, };
	char frname2[100][50] = { 0, };
	int spell;
	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL)
		printf("����\n");
	else
		printf("����\n");

	for (int k = 0; k < 100; k++)
	{
		read = fscanf(fp, "%s", &frname[k]);
		if (read == -1)
			break;
		spell = strlen(frname[k]);
		for (int i = 0; i < spell; i++)
		{
			frname2[k][i] = frname[k][spell - i - 1];
			printf("%c,", frname[k][i]);
		}
		frname2[k][spell] = 0; //��ǥ�ø� ���־���Ѵ�
		//printf("[%2d] %5s %2d %10s\n", k, frname[k], spell, frname2[k]);
		printf("\n");
	}

	fclose(fp);
	return 0;
}