#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	fgets(s1,sizeof(s1),stdin);
	int size=0;
	int i=0;
	while(s1[i]!='\0' && s1[i]!='\n'){
		size++;
        i++;
        }
	printf("%d",size);
	return 0;
}