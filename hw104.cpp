/*
data file silsu01.txt ���Ͽ� 11.12 �� 99.87 ���̿� 
�Ҽ��� ���� 2�ڸ� �Ǽ� �� 4�� �����϶�  
fscanf("", &sil1, &sil2); �о� �鿩�� sil1>sil2 �̸� 
cout<<"sil1 �� sil2 ���� �� ũ��"  sil1<sil2 �̸� 
cout<<"sil1 �� sil2 ���� �� ����"  sil1=sil2 �̸� 
cout<<"sil1 �� sil2 �� ����" ȭ�鿡 ǥ���϶�
*/

#include <iostream>
using namespace std;
int main()
{
	float sil1,sil2,sil3,sil4;
	float num[40] = { 0, };
	FILE* fp = fopen("data.txt", "r");
	/*
	for (int i = 0; i<10; i++)
	{
		fscanf(fp,"%f", &num[i]);
		printf("[%d] %f\n", i, num[i]);
		if (feof(fp))
			break;
	}
	
	sil1 = num[0];
	sil2 = num[1];
	sil3 = num[2];
	sil4 = num[3];
	*/
	/*
	sil1>sil2 �̸� 
cout<<"sil1 �� sil2 ���� �� ũ��"  sil1<sil2 �̸� 
cout<<"sil1 �� sil2 ���� �� ����"  sil1=sil2 �̸� 
cout<<"sil1 �� sil2 �� ����" 
	*/
	rewind(fp); // fp�ʱ�ȭ
	fscanf(fp,"%f %f", &sil1, &sil2);
	fscanf(fp, "%f %f", &sil3, &sil4);
	printf("%.2f %.2f\n", sil1, sil2);
	if (sil1 > sil2)
	{
		cout << "sil1 �� sil2 ���� �� ũ��" << endl;
	}
	else if(sil1 == sil2)
		cout << "sil1 �� sil2 �� ����" << endl;

	else
		cout << "sil2 �� sil1 ���� �� ũ��" << endl;
	printf("%7.2f %7.3f\n", sil3, sil4); //%.2f �Ҽ��� �� 2������ ��� %7.2 : 7��° ĭ ����
	if (sil3 > sil4)
	{
		cout << "sil3 �� sil4 ���� �� ũ��" << endl;
	}
	else if (sil3 == sil4)
		cout << "sil3 �� sil4 �� ����" << endl;

	else
		cout << "sil3 �� sil4 ���� �� ũ��" << endl;
	fclose(fp);
	return 0;
}