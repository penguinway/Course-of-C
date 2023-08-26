#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int map[25][25] = {0};
    int num=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=n-i+1;j>=i;j--)
        {
            map[i][j] = num;
            num++;
        }
        for (int j=i+1;j<=n-i+1;j++)
        {
            map[j][i] = num;
            num++;
        }
        for (int j=i+1;j<=n-i+1;j++)
        {
            map[n-i+1][j] = num;
            num++;
        }
        for (int j=n-i;j>=i+1;j--)
        {
            map[j][n-i+1] = num;
            num++;
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            printf("%4d",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}