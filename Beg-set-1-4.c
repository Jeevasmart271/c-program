#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char c;
clrsccr();
scanf("%c",&c);
i=c;
if(i>96 && i<123)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
