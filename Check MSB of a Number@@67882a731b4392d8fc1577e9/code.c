#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a & 0){
        printf("Set",a);
    }
    else{
        printf("Not Set",a);
    }
    return 0;
}