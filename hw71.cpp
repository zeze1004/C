#include <stdio.h>

int main()
{	
	for (int i = 0; i < 128; i++)
	{
		printf("%2d%4d%10d",i, i,i);
		printf("\n");
	}
	
/*
	printf("deci%cchar%chexa%coctl\n",9,9,9);
	for (int i = 0; i < 128; i++)
	{
		printf("%d\t", i);
		printf("%c\t", i); //�ƽ�Ű�ڵ� 10���� ������ ���Ѵ�
		printf("%x\t", i);
		printf("%o\t", i);

		
		printf("\n");
	
	}
	printf("deci\tchar\thexa\toctl\n");
*/
	return 0;
}