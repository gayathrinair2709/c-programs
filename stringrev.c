/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char string[50];
    printf("Enter the string to be reversed");
    gets(string);
    printf("%s",string);
    int a=strlen(string);
    int t=a,i;
    char str2[a];
    for(i=0;i<=a;i++)
    {
        str2[i]=string[t-1];
        --t;
        
    }
    printf("The reversed string is %s",str2);
    return 0;
}
