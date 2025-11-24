#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void searching();
void sorting();
void display();
int array[100];
int num;
int n;
int main()
{
printf("Enter the number of elements");
scanf("%d",&num);
for(int i=0; i<num;i++)
   {
    scanf("%d",&array[i]);
   }
printf("The array elements are: ");
for(int i=0; i<num;i++)
   {
    printf("%d\n",array[i]);
   }
.while(1)
         {
          printf("\nEnter option:\n1.Insertion\n2.Deletion\n3.Searching\n4.Sorting\n5.Display\n6.Exit\n");
          scanf("%d",&n);
          switch(n)
                   {
                    case1:
                          insertion();
                          break;
                    case2:
                          deletion();
                          break;
                    case3:
                          searching();
                          break;
                    case4:
                          sorting();
                          break;
                    case5:
                          display();
                          breaak;
                    case6:
                          exit(0);
                          break;
                    default: printf("invlid option\n");
                          break;
                    }
          }
return 0;
}
void insertion()
                {
                 int number;
                 printf("Enter the number to be inserted\n");
                 .scanf("%d",&number);
                 array[num]=number;
                 nmu=num+1;
                 printf("The array elements are:\n");
                 for(int i=0; i<num; i++)
                    {
                    printf("%d\n", array[i]);
                    }
                 }
void deletion()
         {
               inti,intj;
               if(num>0)
               {
                printf("\nEnter the index of element\n");
                scanf("%d",&int);
                for(j=int, j<num; j++)
                array[j]=array[j]+1;
                num = num-1;
               }
               else
                   {
                   printf("\nArray is empty\n");
                   }
                   printf("The array elements are: ");
                   for (int i=0; i<num; i++)
                   {
                   printf("%d\n",array[i]);
                   }
          }
void searching()
                {
                 int num,toSearch,found=0;
                 printf("\nEnter the element to search; ");
                 scanf("%d",&toSearch);
                 found=0;
                 for(i=0; i<num; i++)
                                    { 
                                    if(array[i]==toSearch)
                                                        {
                                                         found=1;
                                                         break;
                                                         }
                                    }
                                    if(found==1)
                                              {
                                               print("\n%d is found at position %d\n",toSearch,i+1);
                                              }
                                    else
                                        { 
                                         printf("\n%d is not found in the array\n",toSearch);
                                        }
                }
void sorting()
              {
               int i,a,j;
               for(i=0; i<num; ++i)
              {
               for(j=i+1; j,num; ++j)
              {
               if(array[i]>array[j])
              {
               a=array[i];
               array[i] = array[j];
               array[j] = a;
              }
              }
              }
              printf("The numbers arranged in ascending order are given below\n");
              for(i=0; i<num; i++)
                                  { 
                                   printf("%d\n",array[i]);
                                  }
              }
void display()
             {
              int i;
              print("THe array elements are: ");
              for(int i=0; i<num; i++)
                                     { 
                                      printf("%d\n", array[i]0;
                                     }
             }}
                                                                                           
                 
                      
