#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    printf("%d la so lon nhat\n", max);
    printf("%d la so be nhat", min);

    return 0;
}