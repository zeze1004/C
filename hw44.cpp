/*
�ð����� asctime() ��ȯ�� ��ü ���ڿ� ��ü �߿� ��:��:�� ���� ����
�� �κ� ���ڿ� ©�󳻾� ȭ�鿡 ���� ��� ǥ���Ͽ���
*/
#include <stdio.h>
#include <time.h>
void main()
{
	struct tm* mytstruct;
	time_t*Phour;
	time_t hour = mytstruct->tm_hour;
	Phour = &hour;
	time_t hour;
	
	hour = time(0);
	mytstruct = localtime(&hour);
	asctime(mytstruct);
	char *asc; 
	asc = asctime(mytstruct);
	
	printf("%s", asc);
	

	
}
