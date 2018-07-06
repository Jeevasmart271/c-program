#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char a[50],b[50];
clrscr();
scanf("%s",a);
fflush(stdin);
scanf("%s",b);
for(i=0,j=0;a[i]!='\0',b[i]!='\0';i++,j++)
{
if(a[i]==b[j])
{
printf("%c",a[i]);
}
}
getch();
}
