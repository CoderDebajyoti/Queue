#include<stdio.h>
#include<stdlib.h>

int main()
{
	int gqueue[10], maxsize=10, i, item, n, front=-1, rear=-1;
	do
	{
		printf("Enter your Choice\n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				//enqueue
				if(rear>=maxsize-1)	//overflow cheack
				{
					printf("OverFlow\n");
					break;
				}
				else
				{
					printf("Enter an element\n");
					scanf("%d",&item);	//element insert
					
					if(front==-1&&rear==-1)
					{
						front=0,rear=0;
					}
					else
					{
						rear=rear+1;
					}
					gqueue[rear]=item;
					printf("Enqueue Successful\n\n");
				}
				break;
			case 2:
				//dequeue
				if((rear==-1&&front==-1)||(rear+1==front))
				{
					printf("UnderFlow");
					break;
				}
				else
				{
					item=gqueue[front];
					front=front+1;
					printf("The item is %d\n",item);
				}
				break;
			case 3:
				//display
				printf("The elements of General Queue (is/are) : ");
				for(i=0;i<=rear;i++)
				{
					printf("\n%d",gqueue[i]);
				}
				break;
			case 4:
				exit(0);
				break;
			default: printf("Invalid Input\n\n");	
		}
	}
	while(1);
	return 0;
}
