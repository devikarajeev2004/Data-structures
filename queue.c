#include<stdio.h>
int a[50],front=0,rear=-1,max;
void enqueue();
void dequeue();
void peek();
void display();
void main()
  {
  int choice;
  printf("Enter the maximum of queue:\n");
  scanf("%d",&max);
  do
  {
     printf("Enter the choice:\t1)enqueue\t2)dequeue\t3)peek\t4)display \t5)exit\n");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
       {
         enqueue();
         break;
       }
       case 2:
       {
         dequeue();
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
void enqueue()
{
      int val;
      if(rear>=max-1)
      printf("OVERFLOW!!\n");
      else
      {
      rear++;
      printf("Enter the value to be added:\n");
      scanf("%d",&val);
      a[rear]=val;
      }
}
void dequeue()
{
      int item;
      if(rear<front)
      printf("UNDERFLOW!!\n");
      else
      {
      item=a[front];
      printf("The value %d is dequeued\n",a[front]);
      front++;
      }
}
void peek()
      {
      if(rear<front)
      printf("The Queue is empty\n");
      else
      {
      printf("Front element=%d",a[front]);
      printf("\n");
      }
}
void display()
{
      int i;
      if(front>rear)
      printf("The Queue is empty\n");
      else
      {
      printf("The Queue:");
      for(i=front;i<=rear;i++)
         {
         printf("%d\t",a[i]);
         }
      printf("\n");
  }
}
