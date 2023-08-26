#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[25],b[25]={0};
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int book=0;
    int num=0;
    for (int x=1;x<=n;x++)
    {
        int max = -10000;
        for (int i=1;i<=n;i++)
        {
            if (!b[i])
                if (a[i] > max) max = a[i];
        }
        for (int i=1;i<=n;i++)
        {
            if (a[i] == max) b[i] = num;
        }
        num++;
    }
    for (int i=1;i<=n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}