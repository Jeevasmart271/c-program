#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,j;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
b[j]=a[i];
}
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]!=b[j])
{
printf("%d",a[i]);
}
}
}
getch();
}
