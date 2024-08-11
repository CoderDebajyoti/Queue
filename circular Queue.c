#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cqueue[10], maxsize=10, i, item, n, front=-1, rear=-1;
	do
	{
		printf("Enter your Choice\n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				//enqueue
				if((rear+1)%maxsize==front)	//overflow cheack
				{
					printf("OverFlow");
					break;
				}
				else
				{
					printf("Enter an element:");
					scanf("%d",&item);	//element insert
					
					if(front==-1&&rear==-1)//set rear
					{
						front=0,rear=0;
					}
					else if(rear==maxsize-1&&front != 0)
					{
						rear=((rear+1)%maxsize);
					}
					else
					{
						rear=rear+1;
					}
					
					cqueue[rear]=item;
					
					printf("Enqueue Successful");
				}
				break;
			case 2:
				//dequeue
				if(front==-1&&rear==-1)	
				{
					printf("UnderFlow");
					break;
				}
				else
				{
					item=cqueue[front];
					if(front==rear)
					{
						rear=0 ,front=0;
					}
					else
					{
						front=front+1;
						printf("The item is %d\n",item);
					}
					
				}
				break;
			case 3:
				//display
				printf("The elements of General Queue (is/are) : ");
				for(i=0;i<=rear;i++)
				{
					printf("\n%d",cqueue[i]);
				}
				printf("\n\n");
				break;
			case 4:
				exit(0);	
			default:	printf("Invalid Input");
		}
	}
	while(1);
	return 0;
}
