#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    char find;
    char replace;
    scanf("%s",s1);
    scanf("\n%c", &find);
    scanf("\n%c", &replace);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==find){
            s1[i]=replace;
        }
    }
    printf("%s\n",s1);
    return 0;
}