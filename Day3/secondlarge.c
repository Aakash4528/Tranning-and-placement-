#include<stdio.h>
int main(){
    int n;
    printf("enter size of array  :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter positive number in array  :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1=0,max2=0;
    for(int i=0;i<n;i++){
        if(max1<=arr[i]){
          max2=max1;
          max1=arr[i];
        }else if(max1>arr[i] && max2<arr[i]){
           max2=arr[i]; 
        }
    }
    printf("second largest is %d",max2);
    return 0;
}