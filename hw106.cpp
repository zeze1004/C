/*
irum.txt ���ϼӿ� fscanf("", irum[i]); �о� irum[i-0] �� irum[i]   
�� �� �̸� �ΰ��� ���Ͽ� ���� ���� 
"alphabet ���� irum[i-0] �� irum[i]  ���� ���̴�"
*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
	FILE* fp = fopen("data.txt", "r");
	if (fp != 0)
	{
		printf("file successful\n");
	}
	else
		printf("error");

	int read1, read2;
	char gulja[100];
	char irum[15][20] = { 0, };
	char buffer[100];
	int i = 0;
	while (1)
	{
		read2 = fscanf(fp, "%s", &irum[i]);
		if (read2 == -1)
			break;
		printf("%s\n", irum[i]);
		i++;
		if (feof(fp))
			break;
	}
	int j = 0;
	char *tmp1[100];
	char *tmp2[100];
	while (j<10)
	{
		int ret = strcmp(irum[j], irum[j + 1]);
		if (ret==1)
		{
			printf("%s�� %s���� �ռ���\n", irum[j+1], irum[j]);	
		}
		else if (ret==-1)
		{
			printf("%s�� %s���� �ռ���\n", irum[j], irum[j+1 ]);
			
		}
		else
			printf("%s�� %s�� ����\n", irum[j + 1], irum[j]);
		j++;

	}

	return 0;
}