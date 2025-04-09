#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    scanf("%s",s1);
    char find;
    char replace;
    scanf("%c", &find);
    scanf("%c", &replace);
    char replace;
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==find){
            s1[i]=replace;
        }
    }
    printf("%s",s1);
    return 0;
}