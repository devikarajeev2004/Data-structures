#include<stdio.h>
void main()
{
int i,j,lim,temp;
printf("Enter the size of array:");
scanf("%d",&lim);
int array[lim];
printf("Enter the elements of array:");
for(i=0;i<lim;i++)
  {
    scanf("%d",&array[i]);
  }
  i=1;
     while(i<lim)
     {
      j=i;
     while(array[j]<array[j-1]&&j>0)
          {
          temp=array[j];
          array[j]=array[j-1];
          array[j-1]=temp;
          j=j-1;
          }
     
    i=i+1;
}  
printf("Sorted Array:\n");
for(i=0;i<lim;i++)
{
printf("%d\n",array[i]);
}
}


