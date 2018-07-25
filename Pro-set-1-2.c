#include<stdio.h>

int main() {
   unsigned long int a,i,n,d=1,r;
   scanf("%lu",&a);
   scanf("%lu",&n);
   if(n==0)
   {
       printf("%lu",a);
   }
   else
   {
   for(i=1;i<=n;i++)
   {
       d=d*10;
   }
   r=a%d;
   printf("%lu",r);
   }
}
