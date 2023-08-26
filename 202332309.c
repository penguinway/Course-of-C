#include <stdio.h>
int ans[1000];
int main()
{
    int n,m,temp;
    scanf("%d,%d",&n,&m);
    if (n > m)
    {
        temp = m;
        m = n;
        n = temp;
    }
    if (n <= 0 || m > 9999)
    {
        printf("error");
        return 0;
    }
    int sum=0;int couter=0;
    for (int i=n;i<=m;i++)
    {
        for (int j=1;j<i;j++)
        {
            if (i % j ==0)
            sum += j;
        }
        if (sum == i)
        {
            ans[++couter] = sum;
        }
        sum = 0;
    }
        for (int i=1;i<couter;i++)
            printf("%d,",ans[i]);
        printf("%d",ans[couter]);
    return 0; 
}