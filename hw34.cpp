/*
file 2�� jeongsu.txt, silsu.txt �ӿ� ���� ��ü�� FILE *jfp, *sfp; �̿��Ͽ�
char gulja ���� ������ ���  fgetc() ���� �о ���� ��θ� �о ȭ�鿡 ǥ���Ͽ���
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char gulja = NULL;    // ���ڿ� ������ 4����Ʈ NULL 1����Ʈ. 4 + 1 = 5
    int count = 0;
    int count2 = 0;
    int total = 0;

    FILE* fp1 = fopen("data.txt", "r");    // hello.txt ������ �б� ���(r)�� ����.
                                           // ���� �����͸� ��ȯ
    FILE* fp2 = fopen("data2.txt", "r");
    //while (feof(fp1) == 0)    // ���� �����Ͱ� ������ ���� �ƴ� �� ��� �ݺ�
    printf("fp1:\n");
    while ((gulja = fgetc(fp1)) != EOF) //E0F ����� -1, �̴� ������ ���� �ǹ��Ѵ�. ������ ���� �ƴϸ� ���
    {
        count++;
        putchar(gulja);
        //printf("%s", gulja);  //����
        memset(&gulja, 0, 5);
        total = +count;

    }
    gulja = NULL;
    printf("\n");
    printf("fp2:\n");
    while ((gulja = fgetc(fp2)) != EOF)
    {
        count2++;
        
        putchar(gulja);
        memset(&gulja, 0, 5);
        total += count2;
    }
    printf("\ntotal: %d\n", total);    // total:  ������ ���� ��ü ũ�� ���

    fclose(fp1);    // ���� ������ �ݱ�
    fclose(fp2);
    return 0;
}
