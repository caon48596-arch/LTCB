#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count > max)
        {
            max = count;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == a[j])
                count++;
        }

        if (count == max)
        {
            int daXuatHienTruocDo = 0;
            for (int k = 0; k < i; k++)
            {
                if (a[k] == a[i])
                {
                    daXuatHienTruocDo = 1;
                    break;
                }
            }
            if (daXuatHienTruocDo == 0)
            {
                printf("%d\n", a[i]);
            }
        }
    }
    return 0;
}