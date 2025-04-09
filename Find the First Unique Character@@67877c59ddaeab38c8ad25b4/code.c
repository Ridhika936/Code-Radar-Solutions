#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    scanf("%s",s1);
    for(int i=0;s1[i]!='\0';i++){
        for(int j=i+1;s1[j]!='\0';j++){
            if(s1[i]!=s1[j]){
                printf("%c",s1[i]);
                break;
            }
            else{
                printf("-");
            }
        }
    }
    return 0;
    
}