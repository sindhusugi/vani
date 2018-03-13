#include<stdio.h>
#include<string.h>
int main() 
{
char a[10];
int i,l,f=0;
printf(" ");
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
  f++;
}
}
if(f>=1)
{
printf("yes");
}
else
{
    printf("no");
    return 0;
}
}
