#include<stdio.h>
void main()
{
int hour,minute,total;
printf("Hrs:");
if(scanf("%d",&hour)==1)
{
printf("Mins:");
if(scanf("%d",&minute)==1)
{
minute1=hour*60;
total=minute+minute;
printf(" total minutes=> %d",total);
}
else
{
printf("enter correct value");
}
}
else
{
printf("enter correct value");
}
}
