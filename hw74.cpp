/*
74) �ڿ��� main(){scanf();} �о� 
jin=3���� �������� return mog;�ִ�

�����_�Լ� int mok(int jsu)
{ return mog;} �Լ��� �޾Ƽ� 
main()ǥ��

*/

#include <stdio.h>

int mog(int jsu)
{
	int mog = jsu / 3;
	return mog;
}

int main()
{
	int num, mainmok, namoji;

	AA:
	printf("51~197���� �� �Է��Ͻÿ�: \n");
	scanf_s("%d", &num);
	if (num < 51 || num>197)
	{
		printf("�ٽ� �Է��Ͻÿ�: \n");
		goto AA;
	}
	mainmok = mog(num);
	namoji = num % 3;
	printf("mok: %d , namoji: %d", mainmok, namoji);

	return 0;
}