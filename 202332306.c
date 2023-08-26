#include <stdio.h>
int main()
{
    int input;
    int sum=0;
    for (int i=0;i<8;i++)
    {
        scanf("%d",&input);
        if (input%2==0&&input!=0)
            sum += input;
    }
    printf("%d",sum);
    return 0;
}