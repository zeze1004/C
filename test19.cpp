#include <stdio.h>


int dan(int n)
{
	int num1, num2;



		printf("%d�� ���\n", n);
		for (num2 = 1; num2 < 10; num2++)
		{

			printf("%d * %d = %d \n", n, num2, n * num2);
		}
		
		return 0;
}

int main()
{

	int num1, num2;

	int key;
	for (num1 = 1; num1 < 6; num1++)
	{
		printf("%d�� ���\n", num1);
		for (num2 = 1; num2 < 10; num2++)
		{

			printf("%d * %d = %d \n", num1, num2, num1 * num2);
		}
	}
	printf("1-9 �� �ϳ��� ������ �Է��Ͻÿ�: \n");
	scanf("%d", &key);
	dan(key);

	return 0;
}