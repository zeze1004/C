/*
������ aban.dat �л��� �й� int bun[100]; 
�����̸� char stnam[100][19]; �о�鿩 ȭ�鿡  
�Ϸù�ȣ, �й�, �̸� ���� 
printf("", i, bun[i], irum[i]); ǥ���ϰ�  
�߰��Ͽ� ��������, ��������, Ű ���� ȭ�� 
printf("", i, bun[i], irum[i], math[i], eng[i], ki[i]); ǥ���ϰ�,  
abannew.txt �� �Ϸù�ȣ �����Ͽ� �����Ͽ���
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
int main()
{
	FILE* fp = fopen("name.txt", "r");
	int bum[100]; //�й�
	int hakmax = 8978, hakmin = 3451;
	double kymin = 147.7;
	double kymax = 199.3;
	double kyrange = kymax - kymin;
	char stnam[100];
	int emin = 13;
	int emax = 98;
	int erange = emax - emin;
	int hakrange = hakmax - hakmin;
	int i = 0;
	int eng[100];
	double math[100], ky[100];
	double mathmax = 99.7, mathmin = 50.3;
	double mathrange = (mathmax - mathmin);
	char irum[50][100];
	int geasu;
	while (1)
	{
		if (fgets(irum[i], 30, fp) == NULL) 
			break;
		//fgets�� ������� ����
		geasu = strlen(irum[i]);
		irum[i][geasu-1] = '\0'; //������� �߰��ؼ� geasu ������ �ϳ� ���� ���ڼ���
		//eng[i] = rand() / (RAND_MAX) * (erange) + emin;
		printf("���ڼ�: %d [%d] %s\n", geasu,i, irum[i]);
		i++;
	}
	int j = 0;
	while (j<100)
	{
		bum[j] = rand() / RAND_MAX * hakrange + hakmin;
		printf("%d�й� %d\n", j, bum[j]);
		j++;
	}
	int l = 0;
	while (l<100)
	{
		math[l] = (double)rand() / RAND_MAX * mathrange + mathmin;
		printf("%d�й� �̸� %s ���� %f\n", j,irum[l], math[l]);
		l++;
	}
	int k=0;
	while (k<100)
	{
		eng[k] = rand() / RAND_MAX * erange + emin;
		printf("%d�й� �̸� %s ���� %f ���� %d\n", j, irum[k], math[k],eng[k]);
		k++;
	}
	int n = 0;
	while (n < 100)
	{
		ky[n] = (double)rand() / RAND_MAX * kyrange + kymin;
		printf("Ű: %f", ky[n]);
	}
	int m = 0;
	while ((m < 100)
	{
		fprintf(fp, "%d %d %s %ed %3d %f\n", bun irun math eng ky);
	}

	return 0;
}