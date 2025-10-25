#include <stdio.h>

int main()
{
    int ngay;
    scanf("%d", &ngay);
    if (ngay == 1 || ngay == 3 || ngay == 5 || ngay == 7 || ngay == 8 || ngay == 10 || ngay == 12)
    {
        printf("co 31 ngay");
    }
    if (ngay == 4 || ngay == 6 || ngay == 9 | ngay == 11)
    {
        printf("co 30 ngay");
    }
    if (ngay == 2)
    {
        printf("co 28 hoac 29 ngay");
    }
}
