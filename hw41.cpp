/*
struct tm jigum; �Ϲ� ����ü �̿��Ͽ� localtime(&mytimer) 7���� member (ȸ��) ���ڸ� ȭ�鿡 ǥ���Ͽ���

(1) myt->tm_year ���� 1900 ���� �޼�(�޼�+1900 ���ؾ� ��)
(2) myt->tm_mon �޿� (0,~11 ���ϱ� +1�ؾ� ����)
(3) myt->tm_mday �״� ��¥
(4) myt->tm_wday ���� 0=Sun,1,2,3, 4=Thu, 5=Fri, 6=Sat
(5) myt->tm_hour ��
(6) myt->tm_min ��
(7) myt->tm_sec ��
*/

#include <stdio.h>
#include <time.h>

void main()
{
	struct tm jigum;
	tm* myt;
	myt = &jigum;
	

	int cho, si, bun, yeon, wol, il;
	time_t mytimer;

	mytimer = time(0);
	jigum = *localtime(&mytimer);
	
	printf("����: %d\n", myt->tm_year+1900);
	printf("�޿�: %d\n", myt->tm_mon+1);
	printf("��¥: %d\n", myt->tm_mday);
	printf("����: %d\n", myt->tm_wday);
	printf("��: %d\n",myt->tm_hour);
	printf("��: %d\n",myt->tm_min );
	printf("��: %d\n",myt->tm_sec);

}