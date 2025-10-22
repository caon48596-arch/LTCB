#include <stdio.h>
int main()
{
    //     //bai1a
    //     int a[10];
    //     printf("so phan tu la ");
    //     for (int i = 0; i < 10; i++)
    //     {
    //         scanf("%d", &a[i]);
    //         printf("%d ", a[i]);
    //     }
    //     printf("\n");
    //     int b[10];
    //     printf("so phan tu chan la ");
    //     for (int i = 0; i < 10; i++)
    //     {
    //         scanf("%d", &b[i]);
    //         if (b[i] % 2 == 0)
    //         {
    //             printf("%d ", b[i]);
    //         }
    //     }
    // baic
    // int b[10];
    // int count = 0;
    // int c[10];
    // printf("nhap cac so ");
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &b[i]);
    //     if (b[i] % 2 == 0)
    //     {
    //         c[count] = b[i];
    //         count++;
    //     }
    // }
    // printf("cac so chan la ");

    // for (int i = 0; i < count; i++)
    // {
    //     printf("%d ", c[i]);
    // }
    // baid
    int d[10];
    int e[10];
    printf("nhap cac so ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &d[i]);
        if (d[i] % 2 == 0 && d[i] % 5 == 0)
        {
            printf("cac so chia het cho 5 va 2 la %d ", d[i]);
            printf("nam o vitri thu %d\n", i);
        }
    }
}
