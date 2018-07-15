#include<stdio.h>
#include<conio.h>
void main()
{
char a[3],b[3];
int i,j,c=0,d=0;
clrscr();
scanf("%s %s",a,b);
for(i=1;i<=3;i++)
{
c=a[i+1]-a[i];
}
for(j=1;j<=3;j++)
{
d=b[j+1]-b[j];
}
if(c==d)
printf("Yes");
else
printf("No");
getch();
}
