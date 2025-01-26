#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    switch(x){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d",31);
            break;
        case 4:
        case 6:
        case 9:
        case 11;
            printf("%d",30);
            break;
        case 2:
            if((x%4==0 && x%100!=0)||(x%400==0)){
                printf("%d",29);
            }
            else{
                printf("%d",28);
            }
            break;
        default:
            printf("Invalid month");
            break;
    }
    return 0;
}