#include<stdio.h>
#include<stirng.h>
int main(){
    char s1[];
    scanf("%s",s1);
    int i=0;
    int count=0;
    while(s1[i]!='\0'){
        if(s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U' || s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}