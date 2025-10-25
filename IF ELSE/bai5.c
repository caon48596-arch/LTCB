#include <stdio.h>

int main()
{
    int toan, ly, hoa;
    scanf("%d%d%d", &toan, &ly, &hoa);
    float tb = (toan + ly + hoa) / 3;
    if (tb >= 9)
    {
        printf("%.1f la diem a", tb);
    }
    else if (tb < 9 && tb >= 7)
    {
        printf("%.1f la diem b", tb);
    }
    else if (tb < 7 && tb >= 4)
    {
        printf("%.1f la diem c", tb);
    }
    else if (tb < 4)
    {
        printf("%.1f la diem f", tb);
    }
}