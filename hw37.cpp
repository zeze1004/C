/*
file silsu.txt �ӿ� �Ǽ� 4���� �Ǽ� ���� int s1,s2,*sp3,*sp4; fscanf() �о� �鿩 s1,s2,*sp3,*sp4 ȭ�鿡 ǥ���Ͽ���
*/

#include <stdio.h>

void main()
{
	float s1, s2, * sp3, * sp4;
	FILE* fp = fopen("silsu.txt", "r");
	float arr[200];
	for (int i = 0; i < 4; i++)
		fscanf(fp, "%f", &arr[i]);
	s1 = arr[0];
	s2 = arr[1];
	sp3 = &arr[2];
	sp4 = &arr[3];
	/*
	for (int i = 0; i < 4; i++)
		printf("%f ", arr[i]);
		*/
	printf("%f\n", s1);
	printf("%f\n", s2);
	printf("%f\n", *sp3);
	printf("%f\n", *sp4);
	fclose(fp);
}