#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	scanf("%s",s1);
	int size=0;
	int i=0;
	while(s1[i]!='\0'){
		size++;
		i++;
	}
	printf("%d",size);
	return 0;
}