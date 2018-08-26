#include<stdio.h>
int main() {
   int n,i,r,f=1;
   scanf("%d",&n);
   for(i=1;i<=n;i=i*2)
   {
       if(i==n)
       f=0;
   }
   if(f==0)
   printf("0");
   else
   printf("1");
}
