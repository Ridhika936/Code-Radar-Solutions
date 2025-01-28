#include <stdio.h>
int main(){
    int x,i,k=0;
    scanf("%d",&x);
    for(i=1;i<=x,i++){
        if(x%i==0){
            k++;
        }
}
if(x==2){
    printf("Prime");
}
else{
    printf("Not Prime");
}
    return 0;
}