/*
���� abanex.xls ������ csv (comma separated variable) ���� 
abancsv.csv ���Ϸ� ��ȯ ������Ѷ�  abancsv.csv ������ 
fread(neyong, jasu, 1, fpcsv);  ȭ�鿡 printf("",neyong ); ǥ���Ͽ���
*/

#include <iostream>

int main()
{
	FILE* fpcsv = fopen("abannew.csv", "r");
	char neyong[100] = { 0, };
	int jasu = 4;
	fread(neyong, 1000, 1, fpcsv);
	printf("%s", neyong);

	return 0;
}