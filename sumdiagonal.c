#include <stdio.h>
int main()
{
 int i,j,n,m,sum=0;
  scanf("%d",&n);
 int a[n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==j)
      {
        sum=sum+a[i][j];
      }
    }
  }
  printf("%d",sum);
}
