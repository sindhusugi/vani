#include <stdio.h>
int main()
{
int i, num, A = 0;
printf("enter a number \n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
 A++;
 }
 }
 if(A==2)
 {
 printf("yes");
   }
 else
 {
  printf("no");
   }
}
