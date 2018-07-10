#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,l,s=0;
clrscr();
scanf("%d",&n);
scanf("%d",&c);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=c;i++)
{
s=s+a[i];
}
printf("%d",s);
getch();
}
