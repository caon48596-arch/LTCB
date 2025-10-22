#include <math.h>
#include <stdio.h>

int main()
{
    printf("nhap 1 so ");
    int n;scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    printf("%d", sum);

}
