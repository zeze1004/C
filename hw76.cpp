/*
�ڱ⿵�������� char *cpname(){return mnam;} 
��������� �Լ�, main call �޾� ȭ�� ����ǥ��
*/
#define _CRT_SECURE_NO_WARNINGS    // strcat ���� ���� ���� ������ ���� ����

#include <string.h>
#include <stdio.h>
#include <string>

char* cpname(char* orgin)	//���ڿ� ������ �Լ�(���ڿ� ����Ʈ)
{	
	
	char mnam[50] = "ksj"; //mnam = ksj
	strcpy(orgin, mnam);	//mnam -> orgin ����
							//orgin�� mnam ���ڿ� ����?
	//orgin = &mnam[50];   --> �䷸�� ���� ����
	for (int i = 0; i < 50; i++)
	{
		printf("[%d] %c\n", i + 1, orgin[i]);
		if (orgin[i] == NULL)
			
			break;			
	}
	return mnam;
}

void maincall()
{

}

int main()
{	
	char name;
	char* adress;
	adress = &name;//adress = name �迭�� �ּҰ�
	cpname(adress);  //cpname�� name �ּҰ� ����

	return 0;
}