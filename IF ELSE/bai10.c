#include <stdio.h>

int main()
{
    int km;
    printf("Nhap so km: ");
    scanf("%d", &km);
    int sum = 0;
    if (km == 1)
    {
        sum = 15000;
    }
    else if (km <= 5)
    {
        sum = 15000 + (km - 1) * 13500;
    }
    else
    {
        sum = 15000 + 4 * 13500 + (km - 5) * 11000;
    }

    if (km > 120)
    {
        sum = sum * 9 / 10;
    }

    printf("Tong tien cho %d km la: %dd\n", km, sum);

    return 0;
}