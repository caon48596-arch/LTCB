#include <stdio.h>
#include <stdbool.h>
int check(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return false;
    }
    if (a % b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    check(a, b);
    int c = check(a, b);
    printf("%d", c);
}