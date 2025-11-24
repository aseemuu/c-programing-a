#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,temp;
printf("enter 2 number");
scanf("%d %d ",&a,&b);
temp=a;
a=b;
b=temp;
printf("swap number %d %d",a ,b );
}
