// #include<stdio.h>
// int main(){
//     printf("enter string :");
// //   char *str ;
// //   scanf("%[^\n]",str);
// char str[100];
// scanf("%[^\n]",str);//for take fulll string
//   int count=0;
// //   for(int i=0;str[i]!='\0';i++){
// //     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
// //          count++;
// //     }
// //   }
//   printf("%d",count);
//    return 0;
// }

//type 2
#include<stdio.h>
#include<string.h>
int main(){
    char ch=' ';
    int count=0;
    printf("Enter the string :");
    char str[100];
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        ch=str[i];
        if(ch>='A' && ch<='Z'){
            ch=ch+32;
        }
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') && (ch<=122 && ch>=97)){
            count++;
        }

    }
    printf("number of consonent is %d\n",count);
    return 0;
}
