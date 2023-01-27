#include<bits/stdc++.h>

using namespace std;

struct node {
        int data;
        struct node * next;
};

void  transverse(struct node *head){
    struct node *ptr=head;

    cout<<"this is our circilar linked list"<<endl;

    do{
        cout<<ptr->data<<endl;
        ptr=ptr->next;

    }while(ptr!=head);
}
//inset the element at frist position
struct node * insert_at_first(struct node * head,int val){
        struct node * ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=val;
        ptr->next=head;

      

        return ptr;
}

int main(){

    struct node * first,*second ,*third,*fourth;

    first=(struct node *)malloc(sizeof(struct node ));

    second=(struct node *)malloc(sizeof(struct node ));
    third=(struct node *)malloc(sizeof(struct node ));
    fourth=(struct node *)malloc(sizeof(struct node ));

    first->data=1;
    first->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=first;

    first=insert_at_first(first,0);

    transverse(first);

    return 0;
}

