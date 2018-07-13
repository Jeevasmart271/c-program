#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int i,c=0;
clrscr();
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=c-1;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
