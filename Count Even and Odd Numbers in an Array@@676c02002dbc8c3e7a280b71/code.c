#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0,count1=0;
    for(int i=0;i<n;i++){
        if(arr[n]%2==0){
            count++;
        }
        else{
            count1++;
        }
    }
    printf("%d %d",count,count1);
    return 0;
}
