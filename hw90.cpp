/*
�ڿ��� 12 ~ 98 ���� ��7�� ���� ����Ǿ� �ִ� ���� jasu.txt �� scanf(); �о   
ùĭ�� ���ӹ�ȣ �Բ� ȭ�鿡 �� �ڿ����� ���� cout<< ǥ���Ͽ���
*/

#include<iostream>
using namespace std;

int main()
{
	FILE* fp = fopen("data.txt", "r");
	if (fp != NULL)
	{
		printf("file open sucess\n");
			
	}
	else
	{
		printf("error\n");
	}

	int buffer[100];
	int max = 0;
	int result,nmax;
	int i = 0;
	while (1)
	{
		result = fscanf(fp,"%d", &buffer[i]);
	
		if (result == EOF) 
		{
			break;			
		}
	
		cout <<"["<<i<<"]"<< buffer[i] << endl;
		max = i+1;
		i++;
		
	}
	printf("namx: %d\n", max);



	return 0;
}