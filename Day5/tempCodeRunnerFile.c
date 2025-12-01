#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isarmstrong(int n){
    int temp = n;
    int sum = 0, dig = 0;
    while (n != 0) {
        dig++;
        n = n/ 10;
    }
    n=temp;
    while (temp != 0) {
        int rem = temp % 10;
        sum += (int)pow(rem, dig);
        temp = temp / 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    if (isarmstrong(n))
    {
        printf("%d is Armstrong", n);
    }
    else
    {
        printf("%d is NOT Armstrong ", n);
    }
}