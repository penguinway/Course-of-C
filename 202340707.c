#include <stdio.h>
int cm,kg,stand;
void fun(int a,int b)
{
    if (b >= a-105)
    {
        printf("fat");
        return ;
    }
    else if(b <= a -115)
    {
        printf("thin");
        return ;
    }
    else
    {
        printf("good");
        return ;
    }
}
int main()
{
    scanf("%d %d",&cm,&kg);
    fun(cm,kg);
    return 0;
}