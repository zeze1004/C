#include <stdio.h>
#include <stdlib.h>

/*
73) 51~197���� �ڿ����� keyb scanf(&)�鿩 
3���� ���� ��mok�� ������namojiȭ�� 
printf()ǥ��
*/
int main()
{
	int i = 0;
	int mok, namoji;
	AA:
	printf("51~197���� �� �Է��Ͻÿ�: \n");
	scanf_s("%d",&i);
	if (i < 51 || i>197)
	{
		printf("�ٽ� �Է��Ͻÿ�: \n");
		goto AA;
	}
	


	mok = i / 3;
	namoji = i % 3;

	printf("��: %d\n",mok);
	printf("��: %d\n",namoji);
	



	return 0;
}