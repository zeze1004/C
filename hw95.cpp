/*
 83���� �߰��� 1/2�� ��/2 ������ 
 bitwise right binary shift>>1 �Ͽ�  2���� ǥ���϶�, 
 �� ���� 83 1/2����� 2��°�� binary shift>>1 ����� 
 ��� ����� �޶�, ������ ����� ǥ�õ��� �����Ͽ���.
*/


#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	FILE* fp = fopen("data.txt", "r");
	if (fp != NULL)
	{
		cout<<"file open sucess\n"<<endl;

	}
	else
	{
		cout<<"error\n"<<endl;
	}
	int i = 0;
	int buffer[100];
	int buffer2[100] = { 0, };
	int max = 0;
	char binary[100];
	char binary2[100];
	char binary3[100][100];
	char binary4[100];
	char doublebinary[100] = { 0, };
	char halfbinary[100] = { 0, };
	int result, nmax;
	float fbinary[100];
	char a_bin[100] = { 0, };
	int dob[100] = { 0, };
	int half[100] = { 0, };
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
		cout << "[" << i << "]" << buffer[i] << "\t" << binary << "\t  " << buffer[i] * 2 << "\t" << binary2 << "\t" << fbinary[i] / 2 << "\t" << binary4 << endl;

		max = i + 1;
		i++;

		max = i + 1;

	}
	int j = 0;
	cout << "\n\n" << endl;

	int newnum[100] = { 0, };
	result = 0;
	int a = 0;
	
	

	while (j<i)
	{
		
	
		dob[j] = buffer[j] << 1; //�������� �̵�
		half[j] = buffer[j] >> 1; //���������� �̵�
		_itoa(dob[j], doublebinary, 2);
		_itoa(half[j], halfbinary, 2);
		cout <<"["<< j <<"]"<< dob[j] << "\t" << doublebinary;
		cout << "\t"<<half[j] << "\t" << halfbinary << endl;
		j++;
		
	}
	fclose(fp);

	return 0;
}