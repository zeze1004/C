/*
������ fruit.txt ���� �ӿ� ���� ���� �̸� �� 11���� ���� �����ܾ�
frnam[19][24]; 
*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
	FILE* fpfruit = fopen("data.txt", "r");
	char neyong[100];
	char frnam[100][100] = { 0, };

	int i = 0;
	while (feof(fpfruit) == 0)
	{
		i++;
		fscanf(fpfruit, "%s",frnam[i] );
		printf("[%2d] %2s\n",i, frnam[i]);
	}

	return 0;
}