#include <iostream>

int main()
{
	int i;
	char gulja;
	printf("65-90\n"); //�ҹ��� ���
	for (i = 65; i <= 90; i++)
	{
		gulja = i;
		printf("[%d] %c\t", i, gulja);
	}
	printf("\n97-122\n");
	for (i = 97; i <= 122; i++) //�빮�� ���
	{
		gulja = i;
		printf("[%d] %c\t", i, gulja); //printf("%c",i)�ε� �ٷ� ������� ����
	}
	return 0;
}