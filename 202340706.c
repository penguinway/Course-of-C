#include <stdio.h>
double sum;
int fenzi(int n)
{
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;
    return fenzi(n-2)+fenzi(n-1);
}
int fenmu(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return fenmu(n-1)+fenmu(n-2);
}
double fun(int n)
{
    int i;
    for (i=1;i<=n;i++)
    {
        sum += (double)((double)fenzi(i)/(double)fenmu(i));
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    double ans;
    ans = fun(n);
    printf("%.2lf",ans);
    return 0;
}