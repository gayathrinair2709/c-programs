
#include <stdio.h>
void sum(int *ptr1, int * ptr2);
int main()
{
    int a,b;
    int * ptra, * ptrb;
    printf("\nEnter a value to a:");
    scanf("%d",&a);
     printf("\nEnter a value to b:");
    scanf("%d",&b);
    ptra=&a;
   ptrb=&b;
    sum(ptra,ptrb);
    return 0;
}
 void sum(int *ptr1,int *ptr2)
 {
     int s;
     s= *ptr1 + *ptr2;
     printf("\nthe sum is:%d",s);
     
     
 }