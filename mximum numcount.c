#include<stdio.h>
int main()
{
int temp,i,j,a[10];
printf(" enter the element \n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
printf("%d \t",a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<10;i++)
{
if(a[i]>a[i+1])
{
printf("\n %d maximun",a[i]);
}
}
return 0;
}
