#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000

struct namel
{
    int num;
    int time;
}a1[100]={0};

int main() 
{
    int n;
    int a[MAX_N];
    int *p[MAX_N];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        p[i] = &a[i];
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (*p[i] == *p[j]) 
            {
                int k = j - 1;
                int a = j;
                int *temp = NULL;
                while(i != a - 1)
                {
                    temp = p[a];
                    p[a] = p[k];
                    p[k] = temp;
                    k--;a--;
                }
            }
        }
    }
    int numl = 0;
    a1[0].num = *p[0];
        for (int j = 0; j < n; j++) 
        {
            if (a1[numl].num == *p[j])
            {
                a1[numl].num = *p[j];
                a1[numl].time++;
            }
            if (a1[numl].num != *p[j])
            {
                numl++;
                a1[numl].num = *p[j];
                a1[numl].time++;
            }
        }
        for (int i=0;i<=numl;i++)
        {
            printf("%d %d",a1[i].num,a1[i].time);
        }
    return 0;
}