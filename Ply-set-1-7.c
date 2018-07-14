#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,t;
clrscr();
for(i=1;i<=4;i++)
{
scanf("%c",&a[i]);
}
for(i=1;i<=4;i++)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
i=i+1;
}
for(i=1;i<=4;i++)
{
printf("%c",a[i]);
}
getch();
}
