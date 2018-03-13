#include<stdio.h>
int main() 
{
 int N,r,val=0;
 printf(" ");
 scanf("%d",&N);
 while(N>0)
 {
     r=N%10;
     N=N/10;
     val=val*10+r;
 }
 printf("%d",val);
 return 0;
}
