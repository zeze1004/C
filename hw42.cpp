/*
struct tm *mytstruct; pointer�� �̿��Ͽ� localtime(&mytimer) �̿��Ͽ� 3���� member (ȸ��)
��:��:�� �������� ȭ�鿡 �����Ͽ� ǥ���Ͽ���
*/

#include <stdio.h>
#include <time.h>

void main()
{
	struct tm* mytstruct;
	time_t mytimer;
	mytimer = time(0);
	mytstruct = localtime(&mytimer);
	//printf("%s",ctime(&t));
	printf("��: %d\t", mytstruct->tm_hour);
	printf("��: %d\t", mytstruct->tm_min);
	printf("��: %d\n", mytstruct->tm_sec);

}
