#include <math.h>
#include <stdio.h>

int main()
{
    printf("nhap 1 so ");
    int a;
    scanf("%d", &a);
    if (a < 0)
    {
        printf(" khong phai");
    }

    int so9phuong = 0;
    for (int i = 0; i * i <= a; i++)
    {
        if (i * i == a)
        {
            so9phuong = 1;
            break;
        }
    }
    if (so9phuong)
    {
        printf("%d la so 9 phuong", a);
    }
    else
    {
        printf("khong phai so 9phuong");
    }
    printf("\n");
    printf("nhap 1 so ");
    int b;
    scanf("%d", &b);
    int nguyento = 0;
    for (int i = 2; i * i <= b; i++)
    {
        if (b % i == 0)
        {
            nguyento = 1;
        }
    }
    if (nguyento)
    {
        printf("%d la so nguyento", b);
    }
    else
    {
        printf("khong phai");
    }
    return 0;
}
