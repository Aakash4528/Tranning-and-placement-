#include<stdio.h>
#include<stdbool.h>
bool isprime(int n){
    if(n<=1){
        return false;
    }
    if(n==2){
         return true;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
      int num;
      printf("Enter number range from 1 to : ");
      scanf("%d",&num);
      for(int i=1;i<=num;i++){
      if(isprime(i)){
        printf("%d\t",i);
      }
    }
}