#include <stdio.h>
#define maxn 10000000
int isprime[maxn];
void sieve()
{
    int i;
    for(i=0;i<=maxn;i++)isprime[i]=1;
    isprime[0]=isprime[1]=0;
    for(i=2;i<=maxn;i++){//从2开始往后筛
        if(isprime[i]){
            for(int j=2*i;j<=maxn;j+=i){
                isprime[j]=0;
            }
        }
    }
}
int main()
{
    int m,n;
    sieve();
    scanf("%d,%d",&m,&n);
    int i=0;
    for (i=m;i<=n;i++)
    {
        if (isprime[i] && isprime[i+2])
        {
            printf("%d,%d\n",i,i+2);
        }
    }
    return 0;
}