/*
�Ǽ� �Ҽ� 2�ڸ��� �Ǽ� ��4�� r1,r2,*rp3,*rp4 (2.31~9.77 ���� ����)��
 �Ϲ� �Ǽ� 2��, pointer �Ǽ� 2�� �� 4�� �Ǽ� ���� keyboard ���ʷ� scanf() �о 
 �� 4�� ���� ���� ���� (serial number) �ٿ� 
 printf() ȭ��ǥ���ϰ�, silsu.txt�� fprintf() 4�ٿ� ����
*/

#include <stdio.h>

int main()
{
    float r1, r2,r3,r4;
    float* rp3, * rp4;
    rp3 = &r3; //������ ���� �ʱ�ȭ
    rp4 = &r4; //������ ���� �ʱ�ȭ

    FILE* fp = fopen("data.txt", "wt");
/*
 one:
    printf("2.31~9.77 ���� �Ǽ� �Է��Ͻÿ�: \n");
    scanf("%f", &r1);
    if (r1 < 2.31 || r1>9.77)
    {
        printf("�ٽ� �Է��Ͻÿ�: \n");
        goto one;
    }

two:
    printf("2.31~9.77 ���� �Ǽ� �Է��Ͻÿ�: \n");
    scanf("%f", &r2);
    if (r2 < 2.31 || r2>9.77)
    {
        printf("�ٽ� �Է��Ͻÿ�: \n");
        goto two;
    }

three:
    printf("2.31~9.77 ���� �Ǽ� �Է��Ͻÿ�: \n");
    scanf("%f", rp3);
    if (*rp3 < 2.31 || *rp3>9.77)
    {
        printf("�ٽ� �Է��Ͻÿ�: \n");
        goto three;
    }

four:
    printf("2.31~9.77 ���� �Ǽ� �Է��Ͻÿ�: \n");
    scanf("%f", rp4);
    if (*rp4 < 2.31 || *rp4>9.77)
    {
        printf("�ٽ� �Է��Ͻÿ�: \n");
        goto four;
    }

    printf("[1] %f �ּ�: %d\n", r1,&r1);
    printf("[2] %f �ּ�: %d\n", r2,&r2);
    printf("[3] %f �ּ�: %d\n", *rp3,rp3);
    printf("[4] %f �ּ�: %d\n", *rp4,rp4);

    fprintf(fp, "[1] %f �ּ�: %d\n", r1, &r1);
    fprintf(fp, "[2] %f �ּ�: %d\n", r2, &r2);
    fprintf(fp, "[3] %f �ּ�: %d\n", *rp3, rp3);
    fprintf(fp, "[4] %f �ּ�: %d\n", *rp4, rp4);
    */
    float num,arr[50];
    for (int i = 0; i < 4; i++)
    {
        aa:
        printf("2.31~9.77 ���� �Ǽ� �Է��Ͻÿ�: \n");
        scanf("%f", &num);
        if (num < 2.31 || num>9.77)
        {
            printf("�ٽ� �Է��Ͻÿ�: \n");
            goto aa;
        }
        arr[i] = num;
        
    }
    for (int j = 0; j < 4;j++)
    {
        printf("[arr %d] %f\n", j+1,arr[j]);
    }
    r1 = arr[0];
    printf("r1: %f �ּ�: %d \n", r1,&r1);
    r2 = arr[1];
    printf("r2: %f �ּ�: %d\n", r2,&r2);
    rp3 = &arr[2];  
    *rp4 = arr[3];

    printf("&arr[2]= %d\n",&arr[2]);
    printf("&arr[3]= %d\n\n", &arr[3]);
    printf("\nrp3 = &arr[2]\n");

    printf("r3: %f    *rp3: %f  rp3�ּ�: %d r3�ּ�: %d  \n", r3,*rp3,rp3,&r3);
    //rp3: -107374176.000000 *rp3: 4.300000  �ּ�: 9697152
    
    printf("\n*rp4 = arr[3]\n");
    printf("r4: %f    *rp4: %f  rp4�ּ�: %d   r4�ּ�: %d\n", r4,*rp4,rp4,&r4);

    


    return 0;
}