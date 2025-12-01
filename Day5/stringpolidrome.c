#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string :");
    scanf("%p",&str);
    int i=0;
    int n=0;
    while(str[i]!='\0'){
        n++;
        i++;
    }
    printf("length of string is :%d\n",n);
    i=0;
    while(i<=n/2){
        if(str[n-1-i]!=str[i]){
            printf("not a palindrome string ");
            return 0;
        }
        i++;
    }
    printf("palindrome string");
} 