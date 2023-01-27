#include<bits//stdc++.h>

using namespace std;

struct node{
        int data;
        struct node *next;
};

void transverse(struct node *first){
    int i=1;
    while(first!=NULL){
        cout<<"the "<<i<<"element of the linked list is"<<first->data<<endl;
        first=first->next;
        i++;
    }
}

//insett in firdt of the link list

struct node *insertfirst(struct node * head,int val){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=head;

    return ptr;
}


//insertion in between

struct node * insertinmid(struct node * head,int val,int index){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
     p=p->next;
     i++;
    }
    ptr->data=val;
    ptr->next=p->next;
    p->next=ptr;

    return head;
}
//insertion at end


struct node * intheend(struct node *head,int val){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=val;
    ptr->next= NULL;
    while(p->next!=NULL){
            p=p->next;

    }
    p->next=ptr;

    return head;
}


//insertion after a node

struct node * afternode(struct node *head,struct node * previousnode,int val){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=previousnode->next;

    previousnode->next=ptr;

    return head;

}



//deletion in liled list

struct node * firstdelete(struct node * head){
        struct node * ptr=head;

        head=head->next;

        free(ptr);

        return head;
}

struct node * in_between_del(struct node * head,int index){
    struct node * p=head;
        int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }

    struct node * q=p->next;
    p->next=q->next;

    free(q);

   

    return head;

}


struct node * del_in_last(struct node *head){
    struct node *p1 =head;
    struct node *p2=p1->next;
    while(p2->next !=NULL){
        p1=p1->next;
        p2=p2->next;
        
    }

    p1->next=NULL;
    free(p2);
    return head;

}

struct node * delete_value_node(struct node * head,int val){

    struct node * p1=head;
    struct node * p2=p1->next;

    while(p2->data!=val && p2->next!=NULL){
        p1=p1->next;
        p2=p2->next;
    }

        if(p2->data==val){
                p1->next=p2->next;
                free(p2);
        }

        return head;
}



int main(){

        struct node *first,*second,*third;

        first=(struct node *)malloc(sizeof(struct node));
        second=(struct node *)malloc(sizeof(struct node));
        third=(struct node *)malloc(sizeof(struct node));
        
    
        first->data=10;
        first->next=second;

        second->data=20;
        second->next=third;

        third->data=30;
        third->next=NULL;

      first=insertfirst(first,5);

      first=insertfirst(first,2);

      first=insertinmid(first,1000,1);

      first=intheend(first,7000);
      // transverse(first);

      cout<<"after indet a after node funtion val the limked list will be"<<endl;

      first=afternode(first,third,69);

        transverse(first);


        cout<<"after deletion a list will look like this "<<endl;
       // first =firstdelete(first);

      // first=in_between_del(first,1);

     // first=del_in_last(first); 

     first=delete_value_node(first,2);

        transverse(first);


    return 0;
}