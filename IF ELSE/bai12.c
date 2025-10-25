#include <stdio.h>

int main()
{
    int hh;
    int sumhh = 0;
    scanf("%d", &hh);
    if (hh <= 100)
    {
        sumhh = hh - hh * 0.95;
    }
    else if (hh > 100 && hh <= 300)
    {
        sumhh = hh - hh * 0.9;
    }
    else if (hh > 300)
    {
        sumhh = hh - hh * 0.8;
    }
    printf("%d", sumhh);
}