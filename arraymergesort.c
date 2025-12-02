#include<stdio.h>
void main()
{
 int ar1[10],ar2[10],ar3[20],n,m;
 void readarray(int[],int)
 void printarray(int[],int)
 void merge(int[],int,int[],int[],int)
 printf("enter the limit of first array:");
 scanf("%d",&m);
 printf("enter elements in non decreasing order in first array:");
 readarray(ar1,m);
 printf("enter the limit of second array:");
 scanf("%d",&n);
 printf("enter elements in non decreasing order in first array:");
 readarray(ar2,n);
 merge(ar1,ar2,ar3,m,n);
 printfc("merged array:\n");
 printarray(c,m+n);
 }
 
 
 void readarray(int ar[],int n)
 {
 int i;
 for(i=0;i<n;i++)
  printf("%d",&ar[i]);
 }
 
 
 void printarray(int ar[],int n)
 {
 int i;
 for(i=0;i<n;i++)
  printf("%d",&ar[i]);
  return;
 }
 
 
 void merge(int a[],int b[],int c[],int m,int n)
 {
 int i,j,k;
 i=j=k=0;
 while(i<m&&j<n)
  if(a[i]<b[j])
  {
  c[k]=a[i];
  i++;k++;
  }
  else
  {
  c[k]=b[j];
  j++;k++;
  }
  while(i<m)
  c[k++]=a[i++];
  while(j<n)
  c[k++]=b[j++];
 }
 

