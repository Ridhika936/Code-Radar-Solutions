#include<stdio.h>
int main(){
	int n,max,min;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
	}
}
		printf("%d %d",max,min);
	
	return 0;
}