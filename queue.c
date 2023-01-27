#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
	int front; 
	int rear;
	int size; 
	int* data;
} queue;

void add_queue(queue* que, int data){
	if(que->rear == que->size - 1) {
		printf("Queue overflow!\n");
		return;
	}

	if(que->front == -1 || que->rear == -1)
		que->front = 0;

	que->data[++(que->rear)] = data;
}

void delete_queue(queue* que){
	if(que->front == -1 || que->rear == -1){
		printf("Queue Underflow!\n");
		return;
	}
	(que->front == que->rear) ? que->front = que->rear = -1 : que->front++;
}

void display_queue(queue* que){
	if(que->front == -1 || que->rear == -1){
		printf("Queue is empty!\n");
		return;
	}
	for(int pos = que->front; pos <= que->rear; pos++)
		printf("%d ",que->data[pos]);
	putchar('\n');
	return ;
}

int main(){
	queue* que = malloc(sizeof(queue));
	que->front = que->rear = -1;
	que->size = 5;
	int arr[5];
	que->data = arr;
	while(true){
		int temp; 
		printf("1: Add an element\n2: Remove an element\n3:Display the elements\n4:Exit\n");
		scanf("%d",&temp);
		switch(temp) {
			case 1: 
				printf("Enter the element to be added :- ");
				scanf("%d",&temp);
				add_queue(que,temp);
				break;
			case 2: 
				delete_queue(que);
				break;
			case 3: 
				display_queue(que);
				break;
			case 4:
				exit(0);
			default : 
				printf("You entered a wrong choice!\n");
		}
	}
	return 0;
}
