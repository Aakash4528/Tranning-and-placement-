#include<stdio.h>
#include<stdbool.h>
bool isprime(int n){
    if(n<=1){
        return false;
    }
    if(n==2){
         return true;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(isprime(n)){
        printf("%d is a prime number",n);
    }else{
       printf("%d is not a prime number",n); 
    }
    return 0;
}