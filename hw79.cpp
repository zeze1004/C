/*
	���Լ��� main() ����, 
	�������Լ��� main �ڿ�
*/


#include <stdio.h>

int fnamoji(int num);	//������Ÿ�� ����: main �Լ� �ڿ� �Լ� ������ ��

int fmog(int jsu)
{
	int mog = jsu / 3;
	return mog;
}

int main()
{
	int num, mainmok, mainnamoji;

AA:
	printf("51~197���� �� �Է��Ͻÿ�: \n");
	scanf_s("%d", &num);
	if (num < 51 || num>197)
	{
		printf("�ٽ� �Է��Ͻÿ�: \n");
		goto AA;
	}
	mainmok = fmog(num);
	mainnamoji = fnamoji(num);
	printf("mok: %d , namoji: %d", mainmok, mainnamoji);

	return 0;
}

int fnamoji(int num)
{
	int namoji = num % 3;
	return namoji;
}