#include <stdio.h>
//#include <time.h>

int main()
{
	int j1, j2, j3, j4;
	int* jp3;
	int* jp4;
	
	jp3 = &j3; //������ ���� �ʱ�ȭ **** 
	jp4 = &j4;
	int arr[100];
	FILE* fp;
	fp = fopen("jeongsu.txt", "w");
	for(int i=0;i<4;i++)
	{ 
		fscanf(fp, "%d", &arr[100]);
	}
	
	printf("j1: 35-75������ ���� �Է��Ͻÿ�: ");
	scanf(" %d \n", &j1);

	printf("j2: 35-75������ ���� �Է��Ͻÿ�: ");
	scanf(" %d \n", &j2);

	printf("jp3: 35-75������ ���� �Է��Ͻÿ�: ");
	scanf(" %d \n", jp3);

	//�����ʹ� �ּ��̱⶧���� & �ʿ���� 
	printf("jp4: 35-75������ ���� �Է��Ͻÿ�: ");
	scanf(" %d \n", jp4);

	printf("1. j1: %d �ּ�: %d\n", j1, &j1);
	printf("2. j2: %d �ּ�: %d\n", j2, &j2);
	printf("3. jp1: %d �ּ�: %d\n", *jp3, jp3);
	printf("4. jp2: %d �ּ�: %d\n", *jp4, jp4);
	int temp1,temp2;
	int* tmp1, * tmp2;
	jp3 = &temp1;
	jp4 = &temp2;
	tmp1 = &temp1;
	tmp2 = &temp2;
	*jp3 = j1;
	*jp4 = j2;
	j1 = *tmp1;
	j2 = *tmp2;
	
	printf("j1:%d j2:%d jp3:%d jp4: %d", j1, j2, *jp3, *jp4);
	return 0;
}