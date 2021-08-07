#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int queue[SIZE], head = -1, tail = 0,  choice, number;
void enqueue(int);
int dequeue(void);
int peek(void);
int is_empty(void);
int is_full(void);


void main(){
        while(1)
        {
        printf("1. ENQUEUE\n2. DEQUEUE\n3. PEEK\n4. IS_EMPTY\n5. EXIT\n");
        printf("Enter your choice : \n");
        scanf("%d", &choice);

        switch(choice)
        {
                case 1: printf("Enter Element\n");
                        scanf("%d",&number);
                        enqueue(number);
                        break;

                case 2: number = dequeue();
                        if(number == 0)
                        {

                                printf("queue is empty \n");

                        }
                        else
                        {

                                printf("%d deleted \n", number);

                        }

                       break;

                case 3: number = peek();
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


void enqueue(int n){

        if(is_full())
        {
                printf("queue is full \n");
        }
        else
        {
                queue[tail] = n;
	        printf("%d inserted at location %d\n", n, tail);
		tail++;
		head = 0;
        }

}
int dequeue(){

        if(is_empty())
        {
                return 0;
        }
        else
        {
		int delete = queue[head];

		for(int i = 0; i < tail-1; i++)
		{
			queue[i] = queue[i+1];
		}
		tail--;

		return delete;
        }

}
int peek(){

        if(is_empty())
        {
                return 0;
        }
        else
        {
                int peek = queue[head];
		return peek;
        }

}
int is_empty(){

        if(head == tail)
        {
                return 1;
        }
        else
        {
                            
                return 0;
        }

}
int is_full(){

        if(tail == SIZE)
        {
                return 1;
        }
        else
        {
                return 0;
        }

}

                          
