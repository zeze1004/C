/*
������ aban.dat �л��� �й� int bun[100]; �����̸� char stnam[100][19];
�о�鿩 ȭ�鿡  �Ϸù�ȣ, �й�, �̸� ���� 
printf("", i, bun[i], irum[i]); ǥ���ϰ�  �߰��Ͽ� 
��������, ��������, Ű ���� ȭ�� 
printf("", i, bun[i], irum[i], math[i], eng[i], ki[i]); ǥ���ϰ�,  
abannew.txt �� �Ϸù�ȣ �����Ͽ� �����Ͽ���
*/

#include <iostream>
#include<stdlib.h>

int main()
{
	FILE* fp1 = fopen("aban.txt", "a+");
	FILE* fp2 = fopen("engScore.txt", "r+");
	FILE* fp3 = fopen("math.txt", "r+");
	FILE* fp4 = fopen("abannew.txt", "w");

	char aban[100] = { 0, };
	char eng[100] = { 0, };
	char math_ki[100] = { 0, };

	while (feof(fp1)==0)
	{
		
		fread(aban, sizeof(char), 4, fp1);
		fprintf(fp4, "%s", aban);
		printf("%s", aban);
	}
	while (feof(fp3) == 0)
	{
		fread(math_ki, sizeof(char), 10, fp3);
		printf("%s", math_ki);
		fprintf(fp4, "%s", math_ki);
	}
	while (feof(fp2) == 0)
	{
		fread(eng, sizeof(char), 4, fp2);
		printf("%s", eng);
		fprintf(fp4, "%s", eng);
	}
	int i = 0;


	return 0;
}