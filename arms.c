#include<stdio.h>
int main()
{
int num,originalNum,remaind,result = 0;
printf("Enter a three digit integer");
scanf("%d",&num);
originalNum = num;
while (originalNum != 0
{
remaind = originalNum%10;
result += remaind*remaind*remaind;
originalNum /= 10;
}
if(result == num)
printf("%d is an Armstrong num",num);
else
printf("%d is not an Armstrong num",num);
return 0;
}
