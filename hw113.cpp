/*
������ fruit.txt ���� �ӿ� ���� ���� �̸� 
(1) ����, (2)���ϸ�, (3)���ܾ�spell���� ǥ��
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	int ret;
	int i = 0;
	char frname[100][50] = { 0, };
	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL)
		printf("����\n");
	else
		printf("����\n");

	int spell1 = 0;
	while (feof(fp) == 0)
	{
		spell1 = strlen(frname[i]);
		
		fscanf(fp, "%s", &frname[i]);
		printf("[%2d] %10s %2d\n", i, frname[i], strlen(frname[i]));
		//printf("%s",frname);
		i++;
	}
	return 0;
}