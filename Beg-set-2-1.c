#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,i,p=1;
clrscr();
scanf("%d\t%d",&a,&n);
for(i=1;i<=n;i++)
{
p=p*a;
}
printf("%d",p);
getch();
}
