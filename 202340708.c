#include <stdio.h>
#include <stdbool.h>
int m,n;
bool fun(int x)
{
    int a[10000] = {0};
    int cnt = 0;
    int sum = 0;
    printf("%d,",x);
    int i;
    for (i = 1;i<x;i++)
    {
        if (x % i == 0)
        {
            a[cnt++] = i;
            sum += i;
        }
    }
    for (i = 0;i < cnt-1;i++)
    {
        printf("%d+",a[i]);
    }
    printf("%d=%d\n",a[cnt-1],sum);
    return (sum == m || sum == n);
}
int main()
{
    bool i,j;
    scanf("%d %d",&m,&n);
    i = fun(m);
    j = fun(n);
    if (i && j)
    {
        printf("1\n");
    }
    else printf("0\n");
    return 0;
}