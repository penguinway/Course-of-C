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
    int a[5],b[5],ans[10];
    for (int i=0;i<5;i++) scanf("%d",&a[i]);
    for (int i=0;i<5;i++) scanf("%d",&b[i]);
    for (int i=0;i<10;i++)
    {
        if (i < 5)
            ans[i] = a[i];
        if (i >= 5)
            ans[i] = b[i-5];
    }
    for (int i=0;i<9;i++) printf("%d,",ans[i]);
    printf("%d\n",ans[9]);
    qsort(ans,10,sizeof(ans[0]),cmp_int);
    for (int i=0;i<9;i++) printf("%d,",ans[i]);
    printf("%d",ans[9]);
    return 0;
}