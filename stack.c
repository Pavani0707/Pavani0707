#include<stdio.h>
int stack[20], n, top;
void push();
void pop();
void display();
int main()
{
	int choice;
	top = -1;
	printf("Enter the size of stack: ");
	scanf("%d", &n);
	printf("\n operations:\n1.push\n2.pop\n3.display\n4.exit\n");
	do
	{
		printf("\nEnter the choice : ");
		scanf("%d", &choice);
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

void push()
{
	int num;
	if(top >= n-1)
	    printf("\n stack is overflow\n");
	else
	{
	    printf("Enter the value to be pushed : ");
	    scanf("%d", &num);
	    top++;
	    stack[top]= num;
    }
}

void pop()
{
	int num;
	if(top == -1)
	    printf("\nstack is empty\n");
	else
	{
		num = stack[top];
		top--;
		printf("popped element = %d", stack[top]);
	}
}

void display()
{
	int i;
	if(top >= 0)
	{
		printf("Stack elements are : ");
		for(i = top ; i>=0; i--)
		    printf("%d\n", stack[i]);
	}
	else
	    printf("Stack is empty");
}
