/*
* Author: @utah
* Date:   2023-10-
* Subject:
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
/*
*��Ŀ���� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ��
*���ظ����ֵ���λ�������Ƕ��٣�
*/
int main()
{
    int i, j, k;
    printf("\n");
    for (i = 1; i < 5; i++) { // ����Ϊ����ѭ��
        for (j = 1; j < 5; j++) {
            for (k = 1; k < 5; k++) { // ȷ��i��j��k��λ������ͬ
                if (i != k && i != j && j != k) {
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
        }
    }
	return 0;
}

/*
��Ŀ����ҵ���ŵĽ������������ɡ�
����(I)���ڻ����10��Ԫʱ���������10%��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
*/

int main()
{
    double i;
    double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
    printf("��ľ������ǣ�\n");
    scanf("%lf", &i);
    bonus1 = 100000 * 0.1;
    bonus2 = bonus1 + 100000 * 0.075;
    bonus4 = bonus2 + 200000 * 0.05;
    bonus6 = bonus4 + 200000 * 0.03;
    bonus10 = bonus6 + 400000 * 0.015;
    if (i <= 100000) {
        bonus = i * 0.1;
    }
    else if (i <= 200000) {
        bonus = bonus1 + (i - 100000) * 0.075;
    }
    else if (i <= 400000) {
        bonus = bonus2 + (i - 200000) * 0.05;
    }
    else if (i <= 600000) {
        bonus = bonus4 + (i - 400000) * 0.03;
    }
    else if (i <= 1000000) {
        bonus = bonus6 + (i - 600000) * 0.015;
    }
    else if (i > 1000000) {
        bonus = bonus10 + (i - 1000000) * 0.01;
    }
    printf("���Ϊ��bonus=%lf", bonus);

    printf("\n");
}


/*
��Ŀ��һ��������������100����һ����ȫƽ������
      �ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
*/

int main(void)
{
    int  i, j, m, n, x;
    for (i = 1; i < 168 / 2 + 1; i++)
    {
        if (168 % i == 0)
        {
            j = 168 / i;
            if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
            {
                m = (i + j) / 2;
                n = (i - j) / 2;
                x = n * n - 100;
                printf("%d + 100 = %d * %d\n", x, n, n);
                printf("%d + 268 = %d * %d\n", x, m, m);
            }
        }
    }
    return 0;
}

 
