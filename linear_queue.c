#include<stdio.h>
#include <stdlib.h>
int cir_queue[20], size, front = -1, rear =-1;
void enqueue();
void dequeue();
void display();
int main()
{
	int choice;
	printf("Enter the size of circular queue: ");
	scanf("%d", &size);
	printf("\n operations:\n1.enqueue/insertion\n2.dequeue/deletion\n3.display\n4.exit\n");
	while(1)
	{
		printf("\nEnter the choice : ");
		scanf("%d", &choice);
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
					display();
					break;
				}
			case 4:
				break;
				exit(1);
			default:
				printf("\nEnter valid number!!\n");
		}
	}
	return 0;
}

void enqueue()
{
	int num;
	if(front == (rear +1)%size)
	{
		printf("\nqueue overflow");
		return;
    }
    else if(front ==-1)
    {
    	front = 0;
    	rear = 0;
	}
	else
	    rear =(rear +1)%size;
	scanf("%d", &num);
	cir_queue[rear] = num;
}

void dequeue()
{
	int num;
	if(front == -1)
	{
		printf("queue is empty\n");
	}
	else if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		num = cir_queue[front];
		front = (front +1)%size;
		printf("The deleted element is %d\n", num);
	}
}

void display()
{
	int i;
	if(front == -1)
	{
		printf("queue is empty\n");
	}
	else if(front == rear)
	    printf("%d", cir_queue[front]);
	else if(front < rear)
	{
		for(i = front; i <= rear; i++)
		    printf("%d ", cir_queue[i]);
	}
	else if(rear < front)
	{
		for(i = front; i != rear; i = (i+1)%size)
		    printf("%d ", cir_queue[i]);
		printf("%d\n", cir_queue[rear]);
	}
}
