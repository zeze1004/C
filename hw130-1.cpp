/*
aban �л��� stmax=��100�� �� �������� int math[100]; 
�ּ� mmin=13��, �ִ����� mmax=96��  ���� bumwi=mmax-mmin; 
���� random() ������ �����Ͽ� ȭ�� printf(); ��� file mjumsu.txt�� �����϶�
*/

#include <iostream>
#include <time.h>
int main()
{
	FILE* fp = fopen("output.txt", "w");
	int stmax = 100;
	
	int mmin = 13;
	int mmax = 96;
	int bumwi;
	for (int i = 0; i < 100; i++) {
		bumwi = rand() % (mmax - mmin) + mmin;
		fprintf(fp, "[%d] %d\n", i + 1, bumwi);
		printf("[%d] %d\n", i + 1, bumwi);
	}
	


	return 0;
}