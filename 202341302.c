#include <stdio.h>
#define maxn 10000000
int inverse(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int isprime[maxn];
void prime()
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

int main() {
    prime();
    int m,n;
    scanf("%d %d",&m,&n);
    int i;
    for (i=m;i<=n;i++)
    {
        if (isprime[i])
        {
            if (isprime[inverse(i)])
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}