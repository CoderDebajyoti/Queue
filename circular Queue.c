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
					printf("The item is %d\n",item);
					if(front==rear)
					{
						rear=-1 ,front=-1;
					}	
					else
					{
						front=(front+1)%maxsize;
						
					}
					
				}
				break;
			case 3:
				//display
				for(i=front;i!=rear;i=(i+1)%maxsize)
					{
						print("%d",cqueue[i]);
					}
					print("%d",cqueue[i]);
				break;
			case 4:
				exit(0);	
			default:	printf("Invalid Input");
		}
	}
	while(1);
	return 0;
}
