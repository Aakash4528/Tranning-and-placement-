#include<stdio.h>
int main(){
    int n,size;
    printf("Enetr the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element in  array:");
    for(int j=0;j<size;j++){
      scanf("%d",&arr[j]);
    }
    printf("Enter the number for search is array :");
    scanf("%d",&n);
    for(int i=0;i<size;i++){
        if(arr[i]==n){
          printf("%d is present at index of %d\n",n,i);
        }
    }
    return 0;
}