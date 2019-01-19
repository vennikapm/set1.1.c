# include<stdio.h>
#include<conio.h>
void main();
{
int num,n;
printf("enter testcase");
scanf("%d",&n);
while(n>0)
{
printf("enter number");
scanf("%d",&num);
if(num>=0)
{
printf("positive");
}
else
{
printf("negative");
}
n--;
}
getch();
}
