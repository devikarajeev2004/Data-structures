#include<stdio.h>
void main()
{
int i,lim;
printf("Enter the no of terms:\n");
scanf("%d",&lim);
struct poly
{
  int coef;
  int exp;
} a[50];
printf("Enter the coefficicents and constants:\n");
for(i=0;i<lim;i++)
    {
      scanf("%d%d",&a[i].coef,&a[i].exp);
    }
printf("Polynomial Equation is:\n");
for(i=0;i<lim;i++)
    {
    if(i<lim-1)
       {
       printf("%dx^%d+",a[i].coef,a[i].exp);
       }
    else
       {
       printf("%dx^%d\n",a[i].coef,a[i].exp);
     }
}
}
	

