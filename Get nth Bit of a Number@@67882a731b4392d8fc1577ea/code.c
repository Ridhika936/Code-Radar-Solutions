#include <stdio.h>
int main(){
    int x,n;
    scanf("%d",&n);
    scanf("%d",&x);
    int bit=(x>>n)& 1;
    printf("%d",bit);
    return 0;
}