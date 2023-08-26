#include <stdio.h>
#include <stdlib.h>
int cmp_int(const void* _a , const void* _b)
{
    int* a = (int*)_a;    //强制类型转换
    int* b = (int*)_b;
    return *a - *b;
}
int main()
{
    int n;
    int input[1000]={0};
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&input[i]);
    qsort(input,n,sizeof(input[0]),cmp_int);
    printf("%d %d",input[n-1],input[0]);
    return 0;
}