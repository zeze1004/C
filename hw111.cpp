/*
������ ���� fruit.txt ���� �ӿ� ���� ���� �̸� �� 
11���� �̸��� ��� �ִ� ������ ����� fread( neyong, 300, 1, fpfruit); 
neyong �� ȭ�鿡 ǥ���϶�
*/


#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
	FILE* fpfruit = fopen("data.txt", "r");
	char neyong[100];
	fread(neyong, 300, 1, fpfruit);

	printf("%s\n",&neyong);

	return 0;
}