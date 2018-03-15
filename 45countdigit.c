#include<stdio.h>
int main()
{
int n,m,count=0;
printf(" ");
scanf("%d",&n);
while(n>0)
{
m=n%10;
count++;
n=n/10;
}
printf("%d",count);
return 0;
}


