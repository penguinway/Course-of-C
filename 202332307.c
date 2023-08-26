#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if (a<=10&&a>=3)
    {
        printf("%.0lf",pow(a,4)+pow((a+3),4)+pow((a+6),4)+pow((a+9),4)+pow((a+12),4)+pow((a+15),4));
    }
    else printf("error");
    return 0;
}