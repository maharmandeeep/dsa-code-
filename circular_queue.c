#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	int size;
	int front; 
	int rear;
	int* data;
} queue;

void add_queue(queue* que, int data){
	if((que->rear + 1 - que->front)%(que->size) == 0){
		printf("Queue overflow!\n");
		return ;
	}
	if(que->front == -1 || que->rear == -1)
		que->front = 0;
	que->data[que->rear = (++(que->rear))%(que->size)] = data;
}

void delete_queue(queue *que){
	if(que->front == -1 || que->rear == -1){
		printf("Queue underflow!\n");
		return;
	}
	if(que->front ==  que->rear)
		que->front = que->rear = -1;
	else 
		que->front = ++que->front%que->size;
}

void display_queue(queue* que){
	if(que->front == -1 || que->rear == -1){
		printf("Queue is empty!\n");
		return;
	}
	int pos = que->front - 1;
	do{
		pos = (++pos) % que->size;
		printf("%d ",que->data[pos]);
	}while(pos != que->rear);
	putchar('\n');
}

int main(){
	queue* que = malloc(sizeof(queue));
	que->size = 5;
	que->data = malloc(sizeof(int)*que->size);
	que->front = -1; 
	que->rear = -1;
	while(true){
		int temp;
		printf("1: Enter an element into the queue\n2: Delete an element from queue\n3: Display the queue\n4: Exit\n");
		scanf("%d",&temp);
		switch(temp){
			case 1 : 
				printf("Enter an element to add : ");
				scanf("%d",&temp);
				add_queue(que,temp);
				break;
			case 2 : 
				delete_queue(que);
				break;
			case 3 : 
				display_queue(que);
				break;
			case 4 : 
				exit(0);
			default : 
				printf("Enter some valid choice!\n");
		}
	}
	return 0;
}
