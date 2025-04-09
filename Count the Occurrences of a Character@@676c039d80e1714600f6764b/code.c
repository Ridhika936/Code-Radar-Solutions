#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    scanf("\n%s",s1);
    char x;
    scanf("\n%c",&x);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==x){
            count++;
        }
    }
    printf("\n%d",count);
    return 0;
}