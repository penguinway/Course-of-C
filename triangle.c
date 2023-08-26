#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n+=1;
    int num[21][21]={0};
    num[1][1] =1; num[2][1] =1; num[2][2] =1;
    for (int i=2*n-3;i>=0;i--) printf(" ");
    printf("   1\n");
    for (int i=2;i<=n;i++)
    {
        for (int k = 2*n-2*i-1;k >= 0;k--) printf(" ");
        for (int j=1;j<=i;j++)
        {
            num[i][j] = num[i-1][j-1] + num[i-1][j];
            printf("%4d",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}