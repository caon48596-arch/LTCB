#include <stdio.h>

int main()
{
    // int n;
    // int soduong;
    // printf("nhap sl ");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("cac so duong ");
    //     scanf("%d", &soduong);
    //     if (soduong >= 0) {
    //         printf("%d\n", soduong);
    //     } else {
    //         printf("sai");
    //         break;
    //     }
    // }
    // return 0;
    // }
    int n;
    int soduong;
    int i = 0;
    scanf("%d", &n);
    while (i < n)
    {
        printf("nhap so ");
        scanf("%d", &soduong);
        if (soduong < 0)
        {
            printf("dung");
            break;
        }
        // i++;
    }
            printf("%d\n", soduong);

}
