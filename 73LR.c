#include<stdio.h>
int main()
{
    int num,a,b,count=0,i;
    printf(" ");
    scanf("%d",&num);
    printf(" ");
    scanf("%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(num==i)
        {
            count=count+1;
        }
    }
    if(count==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
