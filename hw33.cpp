/*
file 2�� jeongsu.txt, silsu.txt �ӿ� ���� ��ü�� FILE *jfp, *sfp; �̿��Ͽ�
 fread() ���� �о ���� buffer[200] �� ȭ�鿡 ǥ���Ͽ���
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[200] = { 0, };    // ���ڿ� ������ 4����Ʈ NULL 1����Ʈ. 4 + 1 = 5
    int count = 0;
    int count2 = 0;
    int total = 0;

    FILE* fp1 = fopen("data.txt", "r");    // hello.txt ������ �б� ���(r)�� ����.
                                           // ���� �����͸� ��ȯ
    FILE* fp2 = fopen("data2.txt", "r");
    //while (feof(fp1) == 0)    // ���� �����Ͱ� ������ ���� �ƴ� �� ��� �ݺ�
    printf("fp1:\n");
    while (feof(fp1) == 0)
    {
        count = fread(buffer, sizeof(char), 4, fp1);    // 1����Ʈ�� 4��(4����Ʈ) �б�
        printf("%s", buffer);                          // ���� ���� ���, buffer[i]�� ��� ����
        
        memset(buffer, 0, 5);                          // ���۸� 0���� �ʱ�ȭ
        total += count;                                // ���� ũ�� ����

    }
    printf("\n");
    printf("fp2:\n");
    while (feof(fp2) == 0)
    {
        count2 = fread(buffer, sizeof(char), 4, fp2);
        printf("%s", buffer);
        memset(buffer, 0, 5);
        total += count2;
    }
    printf("\ntotal: %d\n", total);    // total:  ������ ���� ��ü ũ�� ���

    fclose(fp1);    // ���� ������ �ݱ�
    fclose(fp2);
    return 0;
}
