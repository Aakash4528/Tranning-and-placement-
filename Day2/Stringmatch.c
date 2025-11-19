#include<stdio.h>
#include<string.h>
int main() {
    char str1[100], str2[100];
    char *ptr1 = str1;
    char *ptr2 = str2;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    while (*ptr1 == *ptr2) {
        if (*ptr1 == '\0') {
            printf("Same String");
            return 0;
        }
        ptr1++;
        ptr2++;
    }

    printf("Different String");
    return 0;
}

