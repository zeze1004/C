/*
�� ����� aban02.txt �о� �鿩 
3)Math ���� random 24���̻� 89�� ���� �ο�, 
ȭ�鿡 ǥ���ϰ� aban03.txt ���� �����϶�
*/

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstring>

int main()
{
	FILE* fp = fopen("output.txt", "r");
	FILE* fpname = fopen("output2.txt", "w");

	int random=0;
	int i = 0;
	char name[500] = { 0, }; //2���� �迭�� ����ҷ��� �ݺ����� n[i]��
	char chr;
	srand(time(NULL));
	while (feof(fp)==0)
	{
		//fscanf(fp, "%s", name); // 0x2C 	
		random = rand() % (89 + 1 - 24) + 24; //24���̻� 89�� ����
		fgets(name, sizeof(name), fp);
		printf("����:%d  %2s ", random, name);
		fprintf(fpname, "����:%d  %s ", random, name);
		i++;
	}

	rewind(fp);
	fclose(fp);
	fclose(fpname);

	return 0;
}