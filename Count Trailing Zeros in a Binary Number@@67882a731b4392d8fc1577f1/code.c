#include <stdio.h>
int main(){
    int a;
    int count;
    scanf("%d",&a);
    while((a & 1)==0){
        a>>=1;
        count++;
    }
    return count;
    printf("%d",count);
    return 0;
}