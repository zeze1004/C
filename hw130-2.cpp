/*
1302)  aban �л��� stmax=��100�� �� Ű double ky[100]; 
�ּ� kymin=147.7cm, �ִ�Ű�ٸ� kymax=199.3cm  ���� kybumwi=kymax-kimin; ���� random() ky�� �����Ͽ� ȭ�� 
printf(); ��� file ky.txt�� �����϶�
*/

#include <iostream>
#include <time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	double ky[100];
	double kymin = 147.7;
	double kymax = 199.3;
	double kybumwi= kymax-kymin;
	//double random;
	
	FILE* fp = fopen("output.txt", "wt");
	for (int i = 0; i < 100; i++)
	{
		ky[i] = ((double)rand()*kybumwi) / RAND_MAX + kymin;	
		fprintf(fp, "[%d] %f\n",i, ky[i]);
		printf("[%d] %f\n",i, ky[i]);
	}

	return 0;
}