#include <stdio.h>
void leap(int a)
{
    if ( a%4 ==0 && a%100!=0 || a%400 == 0)
    {
        printf("%d is a leap year",a);
    }
    else printf("%d is not a leap year",a);
    return ;
}
int main()
{
    int year;
    scanf("%d",&year);
    leap(year);
    return 0;
}