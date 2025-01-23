#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a & 1){
        printf("Not Set",a);
    }
    else{
        printf("Set",a);
    }
    return 0;
}