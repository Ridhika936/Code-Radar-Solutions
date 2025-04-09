#include<stdio.h>
int main(){
    char s1[100];
    scanf("%s",s1);
    char ch;
    scanf("%c\n", &ch);
    int i=0;
    while(s1[i]!='\0'){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='O' || s1[i]=='U'){
            s1[i]=ch;
        }
        i++;
    }
    printf("%s\n",s1);
    return 0;
}