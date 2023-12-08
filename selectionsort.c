
#include<stdio.h>
void main()
{
int lim,j,i,temp,min_index,count=0;
count++;
printf("Enter the limit:");
scanf("%d",&lim);
count++;
int a[lim];
printf("Enter the values:");
for(i=0;i<lim;i++)
{
 count++;
 scanf("%d",&a[i]);
 count++;
}
count++;
for(i=0;i<lim-1;i++)
{
 count++;
 min_index=i;
 count++;
for(j=i+1;j<lim;j++)
{
 count++;
 if(a[j]<a[min_index])
 {
 count++;
 min_index=j;
 count++;
 }
 count++;
 }
 count++;
 temp=a[i];
 count++;
 a[i]=a[min_index];
 count++;
 a[min_index]=temp;
 count++;
 }
printf("The Sorted array is \n");
for(i=0;i<lim;i++)
{
count++;
 printf("%d\n",a[i]);
 count++;
}
count++;
count+=2;
printf("\nTime complexity =%d",count);
printf("\nSpace complexity =%d",(20+(4*lim)));
}

	

