#include <stdio.h>
#include <math.h>
int main()
{
    int ge,shi,bai;
    for (int i=100;i<=999;i++)
    {
        bai = i/100.0;
        shi = ((i/10)%10);
        ge = (i%10);
        if ((pow((double)bai,3.0)+pow((double)shi,3.0)+pow((double)ge,3.0)) == i)
            printf("%d\n",i);
    }
    return 0;
}