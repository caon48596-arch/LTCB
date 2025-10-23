#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        int tong = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                tong += j;
            }
        }
        if (tong == i)
        {
            printf("%d ", i);
        }
    }
}
