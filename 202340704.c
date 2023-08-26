#include <stdio.h>
int a[10];
void fun(int n)
{
    int i,j,k;
    int cnt=0;
    for(i=0;i<=n;i++)
    {
        if(i<10)
            {printf("%d,",i);cnt++;if (cnt %10 == 0) printf("\n");}
        else if(i<100)
        {
            if(i%11==0)
                {printf("%d,",i);cnt++;if (cnt%10 == 0) printf("\n");}
        }
        else
        {
            j=i;
            k=0;
            while(j!=0)
            {
                a[k++]=j%10;
                j/=10;
            }
            for(j=0;j<k/2;j++)
                if(a[j]!=a[k-j-1])
                    break;
            if(j==k/2)
                {printf("%d,",i);cnt++;if (cnt%10==0) printf("\n");}
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}