#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    scanf("%s",s1);
    int i=0;
    int flag=0;
    int l=strlen(s1);
    for(i=0;i<l/2;i++){
        if(s1[i]!=s1[l-i-1]){
            flag=1;
            break;
        }
    }
    if(flaag==0){
        printf("Yes");
    }
    else
        printf("No");
        return 0;
}