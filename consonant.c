#include<stdio.h>
void main()
{
char c;
printf("enter the character");
scanf("%d",&c);
lower vowel(c=="a"||c=="e"||c=="i"||c=="o"||c=="u");
upper vowel(c=="A"||c=="E"||c=="I"||c=="O"||c=="U");
{
if(lower vowel||upper vowel)
{
printf("is vowel");
else
{
printf("is consonant");
}
}
