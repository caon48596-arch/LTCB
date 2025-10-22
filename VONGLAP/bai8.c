#include <stdio.h>
int main()
{
    printf("tong cac so chan ");
    int a, b;
    scanf("%d%d", &a, &b);
    if(a >= b){
        printf("sai, nhap lai ");
    }else{
    int sum =0;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d ", sum);
}

}
