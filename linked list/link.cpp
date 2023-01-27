#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node * next;
};

void printlinked(struct node *ptr){
        
        
        int i=1;
    while(ptr!=NULL){
        
        cout<<"This is "<<i<<" th number is"<< ptr->data<<endl;

        ptr=ptr->next;

        i++; 
    }

}

int main(){

    struct node * head,*seacond,*third;

    head=(struct node *)malloc(sizeof(struct node));
    seacond=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data=10;
    head->next=seacond;

    seacond->data=20;
    seacond->next=third;

    third->data=30;
    third->next=NULL;

    printlinked(head);







    return 0;
}