/*
aban �л��� stmax=��100�� �� �������� int eng[100]; 
�ּ� enmin=13��, �ִ����� enmax=96��  ���� bumwi=enmax-enmin;
���� random() ������ �����Ͽ� ȭ�� printf(); 
��� file enjumsu.txt�� �����϶�
*/
#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int stmax[100];
	int eng[100];
	int enmin = 13;
	int enmax = 96;
	int bumwi = enmax - enmin;

	FILE* fp = fopen("engScore.txt", "wt");
	for (int i = 0; i < 100; i++)
	{
		eng[i] = (rand() * bumwi) / RAND_MAX + enmin;
		fprintf(fp, "[%d] %d\n", i, eng[i]);
		printf("[%d] %d\n", i, eng[i]);
	}


	return 0;
}