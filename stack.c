#include<stdio.h>
int a[50],top=-1,max;
void push();
void pop();
void peek();
void display();
void main()
{
    int choice;
    printf("Enter the maximum of stack:\n");
    scanf("%d",&max);
    do
    {
    printf("Enter the choice:\t1)push\t2)pop\t3)peek\t4)display\t5)exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
           push();
           break;
        }
        case 2:
        {
           pop();
           break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
         }
         case 5:
         {
            break;
         }
         default :
         {
            printf("Invalid choice\n");
         }
    }
  }
while(choice!=5);
}
void push()
{
     int val;
     if(top>=max-1)
     {
        printf("OVERFLOW!!\n");
     }
     else
     {
        printf("Enter the value to be added into stack:\n");
        scanf("%d",&val);
        top++;
        a[top]=val;
     }
}
void pop()
{
int item;
       if(top==-1)
       {
       printf("UNDERFLOW!!\n");
       }
       else
       {
       item=a[top];
       printf("The value %d is poped out\n",item);
       top--;
       }
}
void peek()
{
       if(top==-1)
       printf("The stack is empty\n");
       else
       {
       printf("The top of the stack=%d",a[top]);
       printf("\n");
       }
}
void display()
{
int i;
        if(top==-1)
        printf("The stack is empty\n");
        else
        {
        printf("The stack:");
        for(i=top;i>=0;i--)
             {
             printf("%d\t",a[i]);
             }
         printf("\n");
        }
}
