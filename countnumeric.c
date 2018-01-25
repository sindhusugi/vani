#include<stdio.h>
void Count(string str)
{
    int number = 0, special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        else if (str[i]>= '0' && str[i]<= '9')
            number++;
        else
            special++;
    }
   printf("Number:\n");
   printf("special character:\n");
   }
   int main()
{
    
    Count(str);
    return 0;
}
