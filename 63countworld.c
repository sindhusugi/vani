#include<stdio.h>
int main()
{
char a[100];
int i,count=0;
printf(" ");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count=count+1;
}
}
printf("%d",count+1);
return 0;
}
