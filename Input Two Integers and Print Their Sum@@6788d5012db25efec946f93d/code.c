#include <stdio.h>
int main(){
    int x,y,Sum;
    scanf("%d%d%d",&x,&y,&Sum);
    Sum = x + y;
    printf("%d: %d + %d",Sum,x,y);
    return 0;
}