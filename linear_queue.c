#include<stdio.h>
int queue[20], n, front = -1, rear =-1;
void enqueue();
void dequeue();
void display();
int main()
{
	int choice;
	printf("Enter the size of queue: ");
	scanf("%d", &n);
	printf("\n operations:\n1.enqueue/insertion\n2.dequeue/deletion\n3.display\n4.exit\n");
	do
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
			default:
				printf("\nEnter valid number!!\n");
		}
	}while(choice!=4);
	return 0;
}

void enqueue()
{
	int num;
	if(rear== n -1)
	    printf("\nqueue overflow");
    else
    {
    	if(front ==-1)
    	    front =0;
    	printf("Enter the value to enqueue : ");
    	scanf("%d", &num);
    	rear++;
    	queue[rear]=num;
	}
}

void dequeue()
{
	if(front == -1)
	{
		printf("queue underflow\n");
		return;
	}
	else if(front == rear)
	{
		printf("Element deleted is %d\n", queue[front]);
		front = -1;
		rear = -1;
	}
	else
	{
		printf("Element deleted is %d\n", queue[front]);
		front++;
	}
}

void display()
{
	int i;
	if(front == -1)
	    printf("queue is empty\n");
	else
	{
		printf("Queue is : \n");
		for(i = front; i <= rear; i++)
		    printf("%d ", queue[i]);
	    printf("\n");
	}
}
