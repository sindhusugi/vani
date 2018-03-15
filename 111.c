#include<stdio.h>
int main()
{
int a,b,count=0;
printf(" ");
scanf("%d",&a);
while(a>0)
{
b=a%10;
count++;
a=a/10;
}
printf("%d",count);
return 0;
}
