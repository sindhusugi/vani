#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int character = 0, space = 0;
    fp = fopen;
    if(fp == NULL)
    {
    printf("File Not Found\n");
    exit(1);
    }
    else
    {
    while(1)
    {
    ch = fgetc(fp);
    if(ch == EOF)   
    {
    break;
    }
    character++;
    if(ch == ' ')
    space++;
    }
    }
    fclose(fp);
    printf("\nNumber of Spaces     = %d\n", space);
 
