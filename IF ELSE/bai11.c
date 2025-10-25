#include <stdio.h>

int main()
{
    int phut;
    scanf("%d", &phut);
    if (phut < 150)
    {
        phut = phut * 600 + 25000;
    }
    else if (phut >= 150 && phut < 200)
    {
        phut = (phut - 149) * 400 + 149 * 600 + 25000;
    }
    else if (phut >= 200)
    {
        phut = 51 * 400 + 149 * 600 + (phut - 199) * 200 + 25000;
    }
    printf("%d", phut);
}
