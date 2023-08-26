#include <stdio.h>
#include <math.h>
int main()
{
    int n=0;
    int map[10]={0};
    int a=1;
    int m=0;
    int book=0;
    char out[1000] = {0};
    scanf("%d",&n);
    book = n;
    while(n/10)
    {
        map[a] = n%10;
        n/=10;
        a++;
    }
    map[a] = n;
    //printf("%d\n",a);
    for (int i=1;i<=a;i++)
    {
        //printf("%d ",map[i]);
        m+=map[i]*pow(10,a-i);
        out[i] = map[i] + '0';
    }
    if (m % book == 0)
    {
        printf("%d*%d=%d",book,m/book,m);
    }
    else 
    {
        printf("%d ",book);
        for (int i=1;i<=a;i++) printf("%c",out[i]);
    }
    return 0;
}