/*
���� �ڿ����� 2�� �� *2 �ڿ����� 4��° ĭ��,   
�� 2����� binary���ڸ� ǥ�� 5��° ĭ�� ǥ�� �Ͽ���.
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
	int result, nmax;
	while (1)
	{
		result = fscanf(fp, "%d", &buffer[i]);
		if (result == EOF)
		{
			break;

		}
		buffer2[i] = buffer[i];
		_itoa(buffer[i], binary, 2);
		_itoa(buffer[i] * 2, binary2, 2);
		cout << "[" << i << "]" << buffer[i] << "\t" << binary << "\t  " << buffer[i] * 2 << "\t" << binary2 << endl;

		//cout<<"����*2 = "<<buffer[i]*2 << endl;
		max = i + 1;
		i++;

	}
	printf("---2�����迭---\n");
	printf("bin�ּ� = %ld\n", binary3[0]);
	printf("bin�ּ� = %d\n", &binary3[0]);
	printf("bin�ּ� = %ld\n", binary3[1]);
	printf("bin�ּ� = %d\n", &binary3[1]);
	printf("%c\n", binary3[0][0]);
	printf("%d\n", binary3[0][0]);

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


*/