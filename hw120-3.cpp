#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstring>

int main()
{
	FILE* fp = fopen("name.txt", "r");
	FILE* fpname = fopen("aban.txt", "w");

	int random = 0;
	int i = 0;
	char name[500] = { 0, }; //2���� �迭�� ����ҷ��� �ݺ����� n[i]��
	srand(time(NULL));
	while(EOF != fscanf(fp, "%s", name))
	/*
	while (feof(fp) == NULL) 
	������ �� �а� NULL�� ��ȯ���� �ʾ� �ݺ��� �� �� �� �����ϰ� ������ �о����� ����ϰ� ������.
	*/
	{	
		fscanf(fp, "%s", name); // 0x2C 	
		random = rand()%(8978+1-3451) + 3451;	// 3451~8978	
		printf("[%d] �й�:%d %s\n", i+1, random, name);
		fprintf(fpname, "[%2d] �й�: %2d  %s\n", i+1, random, name);
		i++;
	}	
	fclose(fp);	
	fclose(fpname);
	
	return 0;
}