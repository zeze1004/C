/*
038)
#include <time.h> Ȱ���ϰ� �Ǹ� �ֿ� 5���� ����� �ִ�.
(1) �ǽð� mainboard ���� real time clock �ð� ���� Ÿ�̸� time_t ���� �� ����,
(2) Ÿ�̸� time_t ���� �ּҸ� mainboard ���� real time clock �ð� �ּҿ� ������ �ð� �ʰ� �д� �Լ� time() �̿�
(3) ����ü struct tm mytstruct; �̿��Ͽ� timer time_t ���� ��,��,��,����, ��,��,�� 7�� ������ ���� ����
(4) localtime() �Լ� �̿��Ͽ� (timer �ּ��Է�- struct �ּ����) struct ���� ������ ��ȯ�� ����
(5) asctime() �Լ��� �̿��Ͽ�
���� �̿��Ҽ� �ִ�

(3)struct tm mytstruct; (4) localtime(), (5) asctime() ������� ����
time() �Լ��� �̿��Ͽ� mainboard ���� real time clock����
 �ʰ�(sec) ���� �������� mytimer=time(0); �о ȭ�鿡 ��� �ʰ��� ǥ���Ͽ���
*/

#include <stdio.h>
#include <time.h>

int main()
{
	while (1) //1 ��� true of i<100..���� �۴ٵ� ok 
	{

		time_t mytimer, * Ptimer;
		//time_t: time �ڷ���
		//mytimer: time ����

		Ptimer = &mytimer;
		//�����ͺ��� �ʱ�ȭ 

		//time(&mytimer);
		//mytimer = time(0) �� ����

/*3���� ������� ���� �� �ִ�
1. ������
2. �ٷ� ���� �ּ��ϱ�
3. ������ time(0) ����
->time �ȿ��� 0 or �ּҸ� �� �� �ִ�
*/

		time(Ptimer); //�ּҰ� 
		printf("%d\n", *Ptimer);
		//printf("%d\n",) 

	}//1�ʿ� �ϳ��� ����,1970����� ���ݱ��� ������ �ð��̶��� 

	return 0;
}