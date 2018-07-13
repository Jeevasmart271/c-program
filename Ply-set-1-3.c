#include<stdio.h>
#include<conio.h>
void main()
{
int a,t,s=0;
clrscr();
scanf("%d",&a);
while(a>0)
{
t=a%10;
a=a/10;
s=(s*10)+t;
}
printf("%d",s);
getch();
}
