#include <stdio.h>
int main()
{
    double input;
    scanf("%lf",&input);
    if (input<=500)
    {
        printf("%.2lf",input);
    }
    else if (input>500 && input<=1000)
    {
        printf("%.2lf",input*0.9);
    }
    else
    {
        printf("%.2lf",0.8*input);
    }
    return 0;
}