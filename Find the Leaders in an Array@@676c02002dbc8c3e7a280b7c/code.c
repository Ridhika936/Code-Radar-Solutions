#include<stdio.h>
void findleaders(int arr[],int size){
    int max_from_right=arr[size-1];
    for(int i=size-2;i>=0;i--){
        if(arr[i]>max_from_right){
            max_from_right=arr[i];
            printf("%d",max_from_right);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    findleaders(arr,n);
    return 0;
}