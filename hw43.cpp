/*
string=asctime(����ü ���� �ּ� �Ǵ� pointer�� ����ü ����); ����� �б� ���� ���ڿ��� ��ȭ�Ͽ� �ش�
�ð����� asctime() ��ȯ�� ��ü ���ڿ� ��ü�� ����Ͽ� ȭ�鿡 ǥ���Ͽ���
*/
#include <stdio.h>
#include <time.h>
void main()
{
	struct tm* mytstruct;
	time_t mytimer;
	mytimer = time(0);
	mytstruct = localtime(&mytimer);
	printf("%s",asctime(mytstruct));
	printf("%s", ctime(&mytimer));

	while (1)
	{
		printf("%s", asctime(mytstruct));
	}
}