#include <stdio.h>
double fun(int x,int n)
{
    if (n == 1) return (double)x;
    if (n == 0) return 1.00;
    return (double)(((double)(2*n-1)*(double)x-fun(x,n-1)-(double)(n-1)*fun(x,n-2))/n);
}
int main()
{
    int n,x;
    double ans;
    scanf("%d,%d",&n,&x);
    if (n < 0) 
    {
        printf("error");
        return 0;
    }
    if (n == 0)
    {
        printf("1.00");
        return 0;
    }
    if (n == 1)
    {
        printf("%.2lf",(double)x);
        return 0;
    }
    else
    {
        ans = fun(x,n);
    }
    printf("%.2lf",ans);
    return 0;
}