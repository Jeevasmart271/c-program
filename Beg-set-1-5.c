#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d\t%d\t%d",&a,&b,&c);
if(a>b && a>c)
{
printf("a is greater");
}
if(b>a && b>c)
{
printf("b is greater");
}
if(c>a && c>b)
{
printf("c is greater");
}
getch();
}
