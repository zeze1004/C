/*
1402_1) fread() neyong ���ڸ� �������� 
�ٸ� ���� array ���� ȭ�鿡 ǥ���϶�
*/

#include <iostream>
#include <stdlib.h>
int main()
{
	FILE* fp = fopen("name2.txt", "r");
	char buffer[4600];
	char buffer2[4600];
	char gulga[4000];
	int j = 0;
	while (feof(fp) == NULL)
	{
		fscanf(fp, "%c", &gulga[j]);
		printf("(%d %c)",j, gulga[j]);
		j++;
	} 
	rewind(fp);
	fread(buffer, 5000, 1, fp);
	printf("����\n");
	
	printf("��\n");
	int length = strlen(buffer);
	printf("���ڱ��� = length: %d\n",length);
	buffer2[length] = '\0';
	for (int i = length - 1; i >= 0; i--)
	{
		printf("%s\n", buffer);
	}
	return 0;
}