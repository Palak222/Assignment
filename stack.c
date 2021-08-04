#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE], top = -1, choice, number;
void push(int);
int pop(void);
int peek(void);
int is_empty(void);
int is_full(void);


void main(){
	while(1)
	{
	printf("1. PUSH\n2. POP\n3. PEEK\n4. IS_EMPTY\n5. EXIT\n"); 
	printf("Enter your choice : \n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1: printf("Enter Element\n");
			scanf("%d",&number);
			push(number);
			break;

		case 2: number = pop();
			if(number == 0)
			{

				printf("Stack is underflow \n");
			
			}
			else
			{

				printf("%d popped \n", number);

			}

		       break;

		case 3: number=peek();
			printf("%d \n",number);

			break;

		case 4: is_empty();

			break;
		
		case 5: exit(0);
			
			break;

		default: printf("Invalid input \n");

			 break;

	}
	}

}
	 				

void push(int n){
	
	if(is_full())
	{
		printf("Stack is full \n");
	}
	else
	{
		top++;
		stack[top] = n;
		printf("%d pushed at the location %d \n", n, top);
	}

}
int pop(){

	if(is_empty())
	{
		return 0;
	}
	else
	{
		return stack[top--];
	}
		
}
int peek(){
	
	if(is_empty())
	{
		return 0;
	}
	else
	{
		return stack[top];
	}

}
int is_empty(){

	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int is_full(){

	if(top == SIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

