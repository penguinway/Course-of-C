#include <stdio.h>
#include <math.h>
int main()
{
    int input;
    scanf("%d",&input);
    if (input%2==0 || input<0)
        printf("%d",input*input);
    else
        printf("%d",input/2);
    return 0;
}