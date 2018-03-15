#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[20];
int l1,l2;
printf(" ");
scanf("%s",&a);
printf(" ");
scanf("%s",&b);
l1=strlen(a);
l2=strlen(b);
if(l1==l2)
{
printf("%s",a);
}
else if(l1>l2)
{
printf("%s",a);
}
else
{
printf("%s",b);
return 0;
}
}
