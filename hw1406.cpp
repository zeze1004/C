/*
�˱� text �ӿ� �ܾ� char daneo[30]; �� 
fscanf(fp, "...", daneo); �о�鿩   ȭ�鿡 ��ȣ �ٿ�, 
�ܾ���� dlen=strlen(daneo);���� 
printf("(%d) ....\n", i, daneo, dlen); ǥ���Ͽ���
*/

#include <iostream>

int main()
{
	FILE* fp = fopen("poem.txt", "r");
	
	char daneo[1024]={ 0, };
	
	int  i = 0;
	while (feof(fp) == NULL)
	{
		fscanf(fp, "%s", &daneo);
		printf("%d��°: %s\n", i, daneo);
		i++;
	}
	
	return 0;
}