/*
040) struct tm *mytstruct; pointer�� �̿��Ͽ� localtime(&mytimer) �̿��Ͽ�
7���� member (ȸ��) ���ڸ� ȭ�鿡 ǥ���Ͽ���  struct tm *myt; ����ü 7����
 member ������  (1) myt->tm_year ���� 1900 ���� �޼�(�޼�+1900 ���ؾ� ��)
 (2) myt->tm_mon �޿� (0,~11 ���ϱ� +1�ؾ� ����)  (3) myt->tm_mday �״� ��¥
 (4) myt->tm_wday ���� 0=Sun,1,2,3, 4=Thu, 5=Fri, 6=Sat  (5) myt->tm_hour ��
 (6) myt->tm_min ��  (7) myt->tm_sec ��  * pointer �� ����ü�� ������
 member ���� ���� -> �� �����Ѵ�  �� �ݴ�� * pointer �� �ƴ� ����ü
struct �Ϲ� ���� ��  member ���� ���� strcutvariable.member �� (.)�����Ѵ�
*/

#include <stdio.h>
#include <time.h>

int main()
{
	//mystruct1 �ʱ�ȭ ���ϴ� ���� : 27�ٿ��� �ʱ�ȭ 
	struct tm* mystruct1, mystruct2; //����ü ������ 
	//struct tm *mystruct;
	int cho, si, bun, yeon, wol, il;
	time_t ksj;
	while (1)
	{

		ksj = time(0);
		/***�����ͺ��� ���****/
//		mystruct1 = localtime(&ksj); //localtime() �Լ� / my1 ������ ���� �ʱ�ȭ 
//		cho = mystruct1->tm_sec;   //*���� ���� -> ����ü ��� ����Ŵ(tm ����ü �������� �ٲ�������) 
//		si = mystruct1->tm_hour;
//		bun = mystruct1->tm_min;
//		
//		yeon = mystruct1->tm_year+1900; //1900�� ���ؾ� 
//		wol = mystruct1->tm_mon+1;
//		il = mystruct1->tm_mday;
//		
//		printf("�� :%d ��: %d ��: %d\n",yeon,wol,il); 
//		printf("��:%d ��: %d ��: %d\n",si,bun,cho); 


		mystruct2 = *localtime(&ksj); //localtime() �Լ� �ּҰ��� �� 
		//localtime�� �ּҿ��� *�� ���̸� �ּҿ� �ִ� ������ ������ ������, ������  mystruct2���� �ѱ� 
		cho = mystruct2.tm_sec;   //�Ϲ� ���� ���� ����ü����. ����ü ��� ����Ŵ(tm ����ü �������� �ٲ�������) 
		si = mystruct2.tm_hour;
		bun = mystruct2.tm_min;

		yeon = mystruct2.tm_year + 1900; //1900�� ���ؾ� ���� ������ ������� ����� 
		wol = mystruct2.tm_mon + 1;      //1�� ���ؾ� ���� ��¥�� ������� ����� 
		il = mystruct2.tm_mday;

		printf("�� :%d ��: %d ��: %d\n", yeon, wol, il);
		printf("��:%d ��: %d ��: %d\n", si, bun, cho);

	}
	return 0;
}