/*
irum.txt ���ϼӿ� Tom, Mary, Thomas, Judy ��� ���� �̸���
�� 11�� ���ʷ� �����϶�  char irum[15][20]; �� ���ʷ� 
(1)fscanf("%c", ch1); (2)fread(), (3)fscanf("", irum[i]); 
�о� �鿩 ȭ�鿡 ���� ��ȣ �ٿ� ǥ���϶�
*/

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
	char irum[15][2];
	char ch1;

	//fscanf %c
	int i = 0;
	int fsnum1 = 0;
	printf("fscanf\n");
	while (feof(fp) == NULL)
	{
		fscanf(fp, "%c", &ch1);
		printf("%c", ch1);
		fsnum1++;	
	}
	int fnum = 0;
	rewind(fp);
	//fread
	printf("\nfread\n");
	char buffer[100];
	int readBuffer;
	while (feof(fp) ==0)
	{
		fread(buffer, sizeof(buffer), 1, fp);
		printf("%s", buffer);
		memset(buffer, 0, 5);
		fnum++;

	}
	rewind(fp);
	printf("\nfscanf\n");
	char read;
	char gulja[100] = { 0, };
	int j = 0;
	while (feof(fp) == NULL)
	{
		read=fscanf(fp, "%s", &irum[j]);
		printf("%s\n", irum[j]);
		
		j++;
		
	}

	fclose(fp);
	return 0;
}