/*
 ���� 4�� int j1,j2,j3,j4; (35-75 ���� ����)�� 
 keyboard ���ʷ� scanf() �о 
 �� 4�� ���� ���� ���� (serial number) �ٿ���, 
printf() ȭ�� 4�� ǥ���ϰ�, jeongsu.txt�� fprintf() 4�ٿ� �����Ͽ���
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int arr[50];
    FILE* fp = fopen("data.txt", "wt");

    for (int i = 0; i < 4; i++)
    {
        aa:
        printf("35-75���� ������ �Է��Ͻÿ�:\n");
        scanf_s("%d",&arr[i]);
        if (arr[i] < 35 || arr[i]>75) {
            printf("�ٽ� �Է��Ͻÿ�: \n");
            goto aa;
        }
        //printf("[%d] %d\n", i+1, arr[i]);
    }
    for (int j = 0; j < 4; j++)
    {
        printf("[%d] %d\n", j + 1, arr[j]);
        fprintf(fp,"[%d] %d\n", j + 1, arr[j]);
    }
    fclose;
    return 0;
}