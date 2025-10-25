#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 10)
    {
        printf("la so tu 1-10");
    }
    if (n > 10 && n <= 20)
    {
        printf("la so tu 10-20");
    }
    if (n > 20)
    {
        printf("la so hơn 20");
    }
}
