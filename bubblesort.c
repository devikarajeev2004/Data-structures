#include<stdio.h>
void main()
{
int i,j,temp,count=0,limit;
count++;
printf("Enter the limit:");
scanf("%d",&limit);
count++;
int array[limit];
printf("Enter the array elements:");
for(i=0;i<limit;i++)
     {
     count++;
     scanf("%d",&array[i]);
     }count++;
for(i=0;i<limit;i++)
     {
     count++;
     for(j=0;j<limit;j++)
         {
         count++;
         if(array[i]<array[j])
           {
           count++;
           temp=array[i];
           array[i]=array[j];
           array[j]=temp;
           count+=3;
           }
         }count++;
      }count++;
printf("Sorted Array is \n");
for(i=0;i<limit;i++)
      {
      count++;
      printf("%d\n",array[i]);
      }count++;
count+=2;
printf("Time Complexity=%d\n",count);
printf("Space Complexity=%d\n",20+(4*limit));
}


