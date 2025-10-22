#include <math.h>
#include <stdio.h>
int main()
{
    printf("tinh S = 1 + 2 + n ");
    printf("nhap 1 so ");
    int sum = 0;
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    printf(" tong %d", sum);
    printf("\n");
    printf("tinh s2\n");
    printf("nhap 1 so ");
    int b;
    scanf("%d", &b);
    int sum2 = 0;
    for (double i = 1; i <= b; i++)
    {
        sum2 += pow(i, 2);
    }
    printf("%d ", sum2);
    printf("\n");
    printf("tinh s3\n");
    printf("nhap 1 so ");
    int c;
    scanf("%d", &c);
    float sum3 = 0;
    for (float i = 1; i <= c; i++)
    {
        sum3 += 1 / i;
    }
    printf("%f ", sum3);
    printf("\n");
    printf("tinh s4\n");
    printf("nhap 1 so ");

    int d;scanf("%d", &d);
    int sum4 = 1;
    for (int i = 1; i <= d; i++){
    sum4 *= i;
    }
    printf("%d ", sum4);
}
