#include<stdio.h>
int main(){
    char n[26];
    char m[26];
    printf("Enter frist the string :");
    scanf("%s",&n);
    printf("Enter second the string :");
    scanf("%s",&m);
    char arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    int p=0;
    while(n[p]!='\0'){
        arr[n[p]-'a']++;
        p++;
    }
    p=0;
    while(m[p]!='\0'){
        arr[m[p]-'a']--;
        p++;
    }
    for(int j=0;j<26;j++){
        if(arr[j]!=0){
            printf("not anagram string");
            return 0;
        }
    }
    printf("anagram string ");
    
}