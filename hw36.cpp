/*
file jeongsu.txt �ӿ� ���� 4���� pointer �� ���� int *j1,*j2,*j3,*j4; fscanf() �о� �鿩  *j1, *j2,*j3, *j4 ȭ�鿡 ǥ���Ͽ���
*/
#include <stdio.h>
void main()
{
	int* j1, * j2, * j3, * j4;
	int num[200];
	j1 = &num[0]; j2 = &num[1]; j3 = &num[2]; j4 = &num[3];
	FILE* fp = fopen("jeongsu.txt", "r");
	for (int i = 0; i < 4; i++)
	{
		fscanf(fp, "%d", &num[i]);
	}
		
	
	printf("%d\n", *j1);
	printf("%d\n", *j2);
	printf("%d\n", *j3);
	printf("%d\n", *j4);
	fclose(fp);
}