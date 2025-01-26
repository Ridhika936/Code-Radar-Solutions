#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=90){
        printf("%d",'A');
    }
    else if(x>=80 && x<90){
        printf("%d",'B');
    }
    else if(x>=70 && x<80){
        printf("%d",'C');
    }
    else if(x>=60 && x<70){
        printf("%d",'D');
    }
    else{
        printf("%d",'F');
    }
    retrurn 0;
}