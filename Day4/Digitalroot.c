#include<stdio.h>
int checknum(int num){
    int sum=0;
    while(num>0){
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
    }
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int fsum=checknum(num);
    while(fsum>=10){
       fsum=checknum(fsum);
    }
    printf(" final Digital root number :%d",fsum); 
     return 0;
}
