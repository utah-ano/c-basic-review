/*
* Author: @utah
* Date:   2023-10-
* Subject:
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
/*
*题目：有 1、2、3、4 四个数字，能组成多少个互不相同且
*无重复数字的三位数？都是多少？
*/
int main()
{
    int i, j, k;
    printf("\n");
    for (i = 1; i < 5; i++) { // 以下为三重循环
        for (j = 1; j < 5; j++) {
            for (k = 1; k < 5; k++) { // 确保i、j、k三位互不相同
                if (i != k && i != j && j != k) {
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
        }
    }
	return 0;
}

/*
题目：企业发放的奖金根据利润提成。
利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
*/

int main()
{
    double i;
    double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
    printf("你的净利润是：\n");
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
    printf("提成为：bonus=%lf", bonus);

    printf("\n");
}


/*
题目：一个整数，它加上100后是一个完全平方数，
      再加上168又是一个完全平方数，请问该数是多少？
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

 
