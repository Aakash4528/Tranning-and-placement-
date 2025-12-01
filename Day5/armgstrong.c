#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isarmstrong(int n)
{
    int temp = n;
    int sum = 0, dig = 0;
    if(n<0)return false;
    while (temp != 0)
    {
        dig++;
        temp = temp / 10;
    }
    temp = n;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += (int)pow(rem, dig);
        temp = temp / 10;
    }
    return (sum == n);
    
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