#include<stdio.h>
#include<stdlib.h>
int myfunction(int x,int y)
{
 int c;
 c=x+y;
 return c;
}
void main()
{
 int a,b;
 printf("enter the two numbers:");
 scanf("%d%d",&a,&b);
 int res=myfunction(a,b);
 printf("sum of two numbers :%d",res);

}
