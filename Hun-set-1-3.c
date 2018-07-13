#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d "&a[i]);
}
for(i=0;i<n;i++)
{
if(i==a[i])
{
printf("%d ",a[i]);
}
}
getch();
}
