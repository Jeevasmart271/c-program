#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,r,s=0;
clrscr();
scanf("%d",&a);
b=a;
while(a>0)
{
r=a%10;
s=(s*10)+r;
a=a/10;
}
if(b==s)
{
printf("Yes");
}
else
{
printf("No");
}
getch();
}
