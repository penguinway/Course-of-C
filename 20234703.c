#include <stdio.h>
double fun(double money,double rate,int n)
{
    double ans;
    if (n == 1)
    {
        ans = money*(1+rate);
        return ans;
    }
    else
    {
        ans = (fun(money,rate,n-1)+money)*(1+rate);
    }
    return ans;
}
int main()
{
    double a,b;
    int c;
    double ans;
    scanf("%lf,%lf,%d",&a,&b,&c);
    b/=12.00;
    ans = fun(a,b,c);
    printf("%.2lf",ans);
    return 0;
}