#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    scanf("%s",s1);
    int i=0;
    int words=1;
    while(s1[i]!='\0'){
        if((i == 0 && s1[i] != ' ') || (s1[i] != ' ' && s1[i-1] == ' ')){
            words++;
        }
    i++;
    }
    printf("%d",words);
    return 0;
}