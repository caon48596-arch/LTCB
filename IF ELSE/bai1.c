#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("sai yeu cau nhhap lai");
    }
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            printf("%d la so chan", n);
        }
        else if (n % 2 != 0)
        {
            printf("%d la so le", n);
        }
    }
}