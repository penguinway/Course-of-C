#include <stdio.h>
#include <math.h>
#define maxn 50000
int isprime[maxn];
int ans[maxn];
void sieve()
{
    for(int i=0;i<=maxn;i++)isprime[i]=1;
    isprime[0]=isprime[1]=0;
    for(int i=2;i<=maxn;i++)
    {//从2开始往后筛
        if(isprime[i]){
            for(int j=2*i;j<=maxn;j+=i){
                isprime[j]=0;
            }
        }
    }
}
int main()
{
    sieve();
    int n;
    scanf("%d",&n);
    int n1=n;
    for (int i=2;i<=1000;i++)
    {
        if (isprime[i])
        {
            while (1)
            {
                if (n1%i==0)
                {
                    ans[i] = 1;
                    n1/=i;
                }
                if (n1%i!=0)
                {
                    break;
                }
            }
        }
    }
    for(int i=1;i<=1000;i++)
    {
        if (ans[i])
        {
            printf("%d ",i);
        }
    }
    return 0;
}