#include <stdio.h>
int main()
{
    
    int m, reverse = 0;
    printf("Enter a number : " );
    scanf("%d", &m);
    while (m!=0)
    {
        reverse=reverse*10+m%10;
        m=m/10;
    }
    printf("%d\n",reverse);
    return 0;
}