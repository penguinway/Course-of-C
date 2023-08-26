#include<stdio.h>
int n;
int a[105],b[105],c[105],d[105];
int main(){
 scanf("%d",&n);
 int i,j;
 for(i=1;i<=n;i++)
 {
  scanf("%d%d",&a[i],&b[i]);
 }
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=n;j++)
     {
      if(a[i]<=a[j]&&a[j]<=b[i]&&b[i]<=b[j])b[i]=b[j];
      if(a[i]>=b[i]&&a[i]<=b[j]&&a[j]<=b[j])a[i]=b[i];
  }
 }
    int cnt=0;
 for(i=1;i<n;i++)
 {
  for(j=1;j<=n-i;j++)
  {
   if(a[j]>a[j+1])
   {
    int tmp1;
    tmp1=a[j];
    a[j]=a[j+1];
    a[j+1]=tmp1;
    int tmp2;
    tmp2=b[j];
    b[j]=b[j+1];
    b[j+1]=tmp2;
   }
  }
 }
 
 for(i=1;i<=n;i++)
    {
     for(j=1;j<=n;j++)
     {
      if(j!=i&&a[j]<=a[i]&&b[j]>=b[i])cnt=1;
  }
     if(cnt!=1)
  {
   printf("%d %d\n",a[i],b[i]);
  }
     cnt=0;
 }
    return 0;
}