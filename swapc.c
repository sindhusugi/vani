#include <stdio.h>
int main()
{
   int a, s, temp;
   printf("Enter the value of a and ysn");
   scanf("%d%d", &a, &s);
   printf("Before Swapping\na = %d\ns = %d\n",a,s);
   temp = a;
   a  = s;
   a  = temp;
   printf("After Swapping\na = %d\ns = %d\n",a,s);
   return 0;
}
