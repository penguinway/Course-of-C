#include <stdio.h>
int main()
{
    int n;int ans=0;
    int up=0,down=0;
    int temp=0,max=-1;
    scanf("%d",&n);
    for (int i=1;i<=1000;i++)
    {
        for (int j=i+1;j<=1000;j++)
        {
            for (int k=i;k<=j;k++)
            {
                ans+=k;
            }
            if (ans == n)
            {
                if (temp > max)
                {
                    up = i;
                    down = j;
                    temp = j - i;
                    max = temp;
                }
            }
            ans=0;
        }
    }
    if (temp == 0) 
    {
        printf("No Answer");
        return 0;
    }
    printf("%d=",n);
    for (int i=up;i<down;i++)
    {
        printf("%d+",i);
    }
    printf("%d",down);
    return 0;
}