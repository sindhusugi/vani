#include <stdio.h>
 int main() 
 {
 int first, diff, terms, value, sum=0, i;
 printf("Enter the number series\n");
 scanf("%d", &terms);
 printf("Enter first term series\n");
 scanf("%d%d", &first, &diff);
 value = first;
 printf("SERIES\n");
 for(i = 0; i < terms; i++) {
 printf("%d ", value);
 sum += value;
 value = value + diff;
 {
 return 0;
 }
