#include<stdio.h>
int main()
{
int n,n1,m;
printf("enter the number \n");
scanf("%d%d",&n,&n1);
m=n*n1;
printf("%d\n",m);
if(m%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
