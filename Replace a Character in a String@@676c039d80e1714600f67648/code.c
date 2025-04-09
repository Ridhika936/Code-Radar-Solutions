#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    scanf("%s",s1);
    char find;
    scanf("%c", &find);
    char replace;
    scanf("%c", &replace);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==find){
            s1[i]=replace;
        }
    }
    for(int i=0;s1[i]!='\0';i++){
    printf("%s",s1);
    }
    return 0;
}