/*
���� �ڿ����� ���� �� /2.0 �Ǽ��� 6��° ĭ��,   
�� 1/2 ���ݼ� �Ǽ��� binary���ڸ� ǥ�� 7��° ĭ�� ǥ�� �Ͽ���.  
binary ���ڴ� 1/2�� �ϸ� �� /2.0����ϸ�, 
���������� 1ĭ shift���� ������
*/

#include <stdlib.h>
#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
	FILE* fp = fopen("data.txt", "r");
	if (fp != NULL)
	{
		printf("file open sucess\n");

	}
	else
	{
		printf("error\n");
	}
	int i = 0;
	int buffer[100];
	int buffer2[100] = { 0, };
	int max = 0;
	char binary[100];
	char binary2[100];
	char binary3[100][100];
	char binary4[100];
	int result, nmax;
	float fbinary[100];
	char a_bin[100] = { 0, };

	while (1)
	{
		result = fscanf(fp, "%d", &buffer[i]);
		if (result == EOF)
		{
			break;

		}
		
		_itoa(buffer[i], binary, 2);
		_itoa(buffer[i] * 2, binary2, 2);
		fbinary[i] = (float)buffer[i];
		_itoa(fbinary[i] / 2, binary4, 2);
		cout << "[" << i << "]" << buffer[i] << "\t" << binary << "\t  " << buffer[i] * 2 << "\t" << binary2<< "\t" << fbinary[i] / 2 << "\t" << binary4 << endl;



		//cout<<"����*2 = "<<buffer[i]*2 << endl;
		max = i + 1;
		i++;

	}
	
	fclose(fp);

	return 0;
}
	/*
	printf: ȭ�鿡 ����Ѵ�
	fprintf: ���Ͽ� ����Ѵ�
	sprintf: string�� ����Ѵ�
	�����쿡�� ����Ʈ�� Ȯ���ڸ� ����� �ߴ�.
	.txt.txt�� ����� ���: Ȯ���ڰ� ������ ��쿡�� �����.
	����Ž���⿡�� Ȯ���� ���̱�� �ٲ㼭 �ٽ� �����Ѵ�

	10������ 2�谡 �ǰ� 2������ �� �ڿ� 0�� �ٰ� �������� shitf�Ѵ�
	10������ 8���ϸ� 2������ �������� �� �� shift�ȴ�

	�迭 �ȿ� ���� �� ������ �� ��
	for (int i = 0; buffer2[i] != NULL; i++)
	�迭 �ʱ�ȭ
	*/
