/*
real time clock���� �ʰ�(sec) ���� �������� time(&mytimer)�о ȭ�鿡 ���δٸ� �ʰ� ��츸 �ʰ��� ǥ���Ͽ���
*/

#include <stdio.h>
#include <time.h>
#include <windows.h>

void main()
{
	time_t mytimer, * Ptimer1, * Ptimer2;
	Ptimer1 = &mytimer;
	Ptimer2 = &mytimer;
	int time1, time2;
aa:
	while (1)
	{

		time1 = time(Ptimer1);
		Sleep(1000);
		break;
	}
	printf("SEC: %d\n", time1);
	
	goto aa;
		

	
	
}