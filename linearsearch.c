#include<stdio.h>
void main()
{
int i,lim,num,count=0,flag=0;
count+=2;
printf("Enter the limit:");
scanf("%d",&lim);
count++;
int array[lim];
printf("Enter the number to be checked:");
scanf("%d",&num);
count++;
printf("Enter the array elements:");
for(i=0;i<lim;i++)
    {
    count++;
    scanf("%d",&array[i]);
    count++;
    }
    count++;

for(i=0;i<lim;i++)
{
  count++;
  if(array[i]==num)
     {
     flag++;
     count++;
     }
  count++;
}
count++;
if(flag>0)
{
count++;
printf("Element is present\n");
}
else
{
printf("Element is not present\n");
}
count+=2;
printf("Time Complexity = %d\n",count);
printf("Space complexity = %d\n",20+4*lim);
}
