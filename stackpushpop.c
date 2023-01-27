#include<stdio.h>
#include<conio.h> 
#define maxsize 5
int arr[100];
int top=-1;

void push(){
    int item;
    if(top==maxsize-1){
        printf("stack is overflow\n");
    }
    else{
        printf("enter the number you want to addd\n");
        scanf("%d",&item);
        top++;
        arr[top]=item;
    }
}

void pop(){
    if(top==-1){
        printf("stack is underflow\n");
    }

    else{
        top--;
    }
}

void display(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else
{    for(int i=0;i<=top;i++){
        printf("%d \n",arr[i]);
    }
}
}



 int main(){
     int cho;
     while(24){
     printf("press 1 if you want to add element in stack\n press2 if you want to remove element in stack \n press 3  if you want to dispaly \n ");

     scanf("%d",&cho);
     
     switch(cho){
         case 1:push();
         break;

         case 2:pop();
         break;

         case 3:display();
         break;

         

         default :printf("you enter wrong choice");
     }

     }
     return 0;
     
 }                                                                                                                                                              