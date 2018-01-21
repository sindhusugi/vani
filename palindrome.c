#include <stdio.h>
int main()
{  
int n, reverInt= 0, remaind, originalint;   
printf("Enter an integer");    
scanf("%d", &n);   
originalint= n;  
 while( n!=0 )   
{        
remainder = n%10;        
reverint=reverint*10 + remaind;       
 n /= 10;   
}       
if (originalint== reverint)        
printf("%d is a palindrome", originalint);   
else        
printf("%d is not a palindrome", originalint);  
return 0;
}
