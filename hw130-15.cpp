/*
(1)1�� -99�� ����ǥ��, (2) rand()ǥ��, (3)randmaxǥ��, 
(4) ���� %f (5)�ּ�=98 ,(6)�ִ�13, (7)����%d (8) ����+�ּ� �� ĭ��ǥ���϶�
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int num,max;
	float fnum;
	int emin, emax, ebumwi, ebiyul,eng; 
	emin = 13;
	emax = 98;
	ebumwi = emax - emin;
	
	max = RAND_MAX; //�ִ밪�� RAND_MAX,<stdlib.h>�� ����, 32767
	srand(rand());
	for (int i = 1; i < 100; i++)
	{
		num = rand();
		fnum = (float)num / (float)max;
		ebiyul = ebumwi * fnum;
		eng = ebiyul + emin;
		printf("%2d %5d %d %f emin: %d emax: %d ebumwi: %d ebiyul: %d %d\n", 
			i, num, max,fnum,emin,emax,ebumwi,ebiyul,eng);
	}

	return 0;
}