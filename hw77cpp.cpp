/*
0���� 127 �ڿ����� ���ٿ� 1���� while �̿�
decimal %2d, %4d, %9d, char, hexa, octal, ǥ���϶�
*/

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int num;
	for (int i = 0; i < 128; i++)
	{		
		printf("[%d]\t", i);
		printf("%c\t", i);
		cout << "8����:\t" << oct << i ;
		cout << "16����:\t" << hex << i ;
		cout << "10����:\t" << dec << i ;
		printf("\n");

	
	}
	return 0;
}
