#include <stdio.h>
int main()
{
    int a[10];
    int sum=0;
    for (int i=0;i<=9;i++) 
    {
        scanf("%d",&a[i]);
        if (i<=8) sum+=a[i];
    }
    a[9] = sum/9;
    for (int i=0;i<9;i++)
        printf("%d,",a[i]);
    printf("%d",a[9]);
    return 0;
}