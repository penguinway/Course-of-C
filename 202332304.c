#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double rate;
    if (n <= 200)
    {
        rate = 0.8*n;
    }
    else if (n>200&&n<=300)
    {
        rate = 160.0+0.9*(n-200.0);
    }
    else
    {
        rate = 160.0+90.0+(n-300.0);
    }
    if (rate > 400)
    {
        rate *= 1.15;
    }
    if (rate < 100)
    {
        rate = 100.00;
    }
    printf("%.2lf",rate);
    return 0;
}