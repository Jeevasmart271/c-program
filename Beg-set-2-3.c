#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a%2==0||a%3==0||a%5==0||a%7==0)
{
printf("No");
}
else
{
printf("Yes");
}
getch();
}
