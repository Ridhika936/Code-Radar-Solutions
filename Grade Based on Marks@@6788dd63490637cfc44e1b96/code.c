#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=90){
        printf("%c",'A');
    }
    else if((x>=80) && (x<90)){
        printf("%c",'B');
    }
    else if((x>=70) && (x<80)){
        printf("%c",'C');
    }
    else if((x>=60) && (x<70)){
        printf("%c",'D');
    }
    else{
        printf("%c",'F');
    }
    return 0;
}