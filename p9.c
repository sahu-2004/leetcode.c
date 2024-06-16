#include <stdio.h>
int main()
{
    
    int n, m, reverse = 0;
    printf("Enter a number : " );
    scanf("%d", &n);
    m = n;

    while (m!=0)
    {
        reverse=reverse*10+m%10;
        m=m/10;
    }
    printf("%d\n",reverse);
    if (n == reverse)
    {
        printf("The number is a palindrome. \n");
    }
    else
    {
        printf("The number is not a palindrome. \n");
    }

    return 0;
}