#include <stdio.h>
int i,j,k;
void fun(int a)
{
    for (i=0;i<=a;i++)
    {
        for (j=0;j<=a;j++)
        {
            for (k=0;k <=a;k++)
            {
                if (4*i + 3*j + k/2 == a && k%2 == 0 && i+j+k == a)
                {
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun (n);
    return 0;
}