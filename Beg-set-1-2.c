#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a>0)
{
if(a%2==0)
{
printf("even");
}
else
{
printf("odd");
}
}
else
{
printf("Invalid");
}
getch();
}
