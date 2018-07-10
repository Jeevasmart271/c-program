#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int i;
clrscr();
scanf("%c",&a);
i=a;
if(i>96 && i<123)
{
if(i==97||i==101||i==105||i==111||i==117)
{
printf("vowel");
}
else
{
printf("consonant");
}
}
else
{
printf("invalid");
}
getch();
}
