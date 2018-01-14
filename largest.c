#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers a,b,c");
scanf("%d%d%d",&a,&b,&c);
{
if(a>b&&a>c)
largest=a;
else if(b>c&&b>a)
largest=b;
else
largest=c;
printf("the largest number is=%d",largest);
return 0;
}
}

