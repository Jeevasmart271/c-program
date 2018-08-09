#include<stdio.h>
int main()
{
  int n,s,i,j,k,g[100],c1,c2,c3;
  scanf("%d",&n);
while(n>0)
  {
    scanf("%d",&s);
    for(j=0;j<s;j++)
    {
      scanf("%d",&g[j]);
    }
      c1=0;
      c2=0;
      c3=0;
      for(j=0;j<s;j+=2)
      {
        c1=c1+g[j];
      }
      for(j=1;j<s;j+=2)
      {
        c2=c2+g[j];
      }
      if(s>3)
      {
      for(j=3;j<s;j++)
      {
        c3=c3+g[j];
      }
      }
      if(c1>c2 && c1>c3)
      {
        printf("%d",c1);
      }
      else if(c2>c1 && c2>c3)
      {
        printf("%d",c2);
      }
      else
       {
        printf("%d",c3);
       }
   n--;
   }
    return 0;
}
