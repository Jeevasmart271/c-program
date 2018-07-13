#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i,j,c=0;
clrscr();
scanf("%s %s",a,b);
for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++)
{
if(a[i]!=b[j])
{
c++;
}
}
printf("%d",c);
getch();
}
