


/*
�˱� text �ӿ� �ܾ� char daneo[30]; ��
fscanf(fp, "...", daneo); �о�鿩   ȭ�鿡 ��ȣ �ٿ�,
�ܾ���� dlen=strlen(daneo);����
printf("(%d) ....\n", i, daneo, dlen); ǥ���Ͽ���
*/

#include <iostream>
#include <string.h>

int main()
{
	FILE* fp = fopen("poem.txt", "r");

	char daneo[1024] = { 0, };
	int dlen;
	int  i = 0;
	while (feof(fp) == NULL)
	{
		fscanf(fp, "%s", &daneo);
		dlen = strlen(daneo);
		if (daneo[0] >= 'a' && daneo[0] <= 'z') { //daneo[0] ù ���ڸ� ��
			//�ҹ��ڸ� �빮�ڷ� ���
			daneo[0] = daneo[0]-32; //32=97(small a)-65(large A)
			//�빮�ڿ� �ҹ��� ���̴� �׻� 32��ŭ ���̰� ����
		}
		printf("%d��° len:%d : %s\n", i,dlen, daneo);
		i++;
	}

	return 0;
}