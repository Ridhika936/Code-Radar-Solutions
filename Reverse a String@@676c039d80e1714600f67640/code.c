#include<stdio.h>
#include<string.h>
int main(){
    char s1[];
    scanf("%s",s1);
    int i=0;
    while(s1[i]!='\0'){
        if(s1[i]=='\n'){
            break;
        }
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",s1[j]);
    }
    return 0;
}