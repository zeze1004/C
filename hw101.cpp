/*
printf("3<1 = %d, 3>1 = %d \n", 3<1, 3>1); 
printf("3==1 = %d, 3!=1 = %d \n", 3==1, 3!=1);
3�� 1�� ũ�⸦ ���ϴ� logical expression equation ���� 
decimal ������ ǥ���Ͽ���
�� ������ ������ a,b �̿��Ͽ� ǥ���϶�
*/

#include <iostream>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("a<b = %d, a>b = %d \n", a < b, a > b);
	printf("b==a = %d, b!=a = %d \n", b == a, b != a);
	printf("a=b -> a = %d\n", a = b);
	return 0;
}