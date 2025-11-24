#include<stdio.h>
int main(){
    int n,m;
    printf("Enter frist the number :");
    scanf("%d",&n);
    printf("Enter second the number :");
    scanf("%d",&m);
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=0;
    }
    while(n!=0){
        int f=n%10;
        n=n/10;
        arr[f]++;
    }
    while(m!=0){
        int f=m%10;
        m=m/10;
        arr[f]--;
    }
    for(int j=0;j<10;j++){
        if(arr[j]!=0){
            printf("not anagram number");
            return 0;
        }
    }
    printf("anagram number ");
    
}