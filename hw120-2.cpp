#include <string>
#include <iostream>

int main()
{
	FILE* fp = fopen("data.txt", "a+");
	FILE* fp2 = fopen("name.txt", "a+");
	
	char chr; //name

	while (feof(fp)==NULL)
	{
		fscanf(fp, "%c", &chr); //fscanf�� �μ��� �޴´�
		printf("%c", chr);
		
	}
	printf("\n----fgetc-----\n");
	rewind(fp);
	while (feof(fp) == NULL)
	{
		chr = fgetc(fp); //fgetc�� return ������ �޴´�
		printf("%c", chr);
	}
	rewind(fp);
	printf("\n----��ȣ����-----\n");
	while (feof(fp) == NULL)
	{
		chr = fgetc(fp); //fgetc�� return ������ �޴´�
		if (('a' <= chr) && (chr <= 'z') || ('A' <= chr) && (chr <= 'Z'))
		{
			printf("%c", chr);
			fprintf(fp2, "%c", chr);
		}
		
		if (chr == 32 || chr == ',' || chr == 10)	//32 ����
		{
			printf("%c", 10); //10 \n
			fprintf(fp2, "%c",10);
		}
	}
	printf("\n");
	return 0;
}