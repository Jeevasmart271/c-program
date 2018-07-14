#include<stdio.h>
#include<conio.h>
void main()
{
char a[3],b[3];
int i,j,p=0,q=0;
clrscr();
scanf("%s %s",a,b);
for(i=1;i<=3;i++)
{
p=a[i+1]-a[i];
}
for(j=1;j<=3;j++)
{
q=b[j+1]-b[j];
}
if(p==q)
printf("YES");
else
printf("NO");
getch();
}
