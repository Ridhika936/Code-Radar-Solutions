#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    scanf("%s",s1);
    char x;
    scanf("%c\n",&x);
    int count=0;
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}