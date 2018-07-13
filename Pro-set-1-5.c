#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
scanf("%d %d %d",&a,&b,&c);
d=b+c;
if(a%d==0)
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
