#include <stdio.h>
int main(){
    int n;scanf("%d", &n);
    printf("cac so cach 3 ");
    for(int i = n;i >=1; i-=3){
        printf("%d ", i);
    }
    return 0;
}
