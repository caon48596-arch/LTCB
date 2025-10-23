#include <stdio.h>
#include <math.h>
int giam(int n)
{
    int s = 0;
    for (int i = n; i > 0; i /= 10)
    {
        s = s + i % 10;
    }
    return n > 0;
}
int giam1()
{
    int n;
    scanf("%d", &n);
    int s = 0;
    for (int i = n; i > 0; i /= 10)
    {
        s = s + i % 10;
    }
    printf("%d ", s);
    return n > 0;
}
void giam2(int n)
{
    int s = 0;
    for (int i = n; i > 0; i /= 10)
    {
        s = s + i % 10;
    }
    printf("%d", s);
}
void giam3()
{
    int n;
    scanf("%d", &n);
    int s = 0;
    for (int i = n; i > 0; i /= 10)
    {
        s = s + i % 10;
    }
    printf("%d", s);
}

int main()
{

    giam3();
}