#include<bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node *left;
    struct node * right;
};

struct node * createnode(struct node * root,int value){

    struct node *temp=(struct node *)malloc(sizeof(struct node));

        temp->data=value;
        temp->left=NULL;
        temp->right=NULL;

        return temp;
}

int main(){

    struct node * p=NULL;
    p=(struct node *)malloc(sizeof(struct node ));

    p->data=24;
    p->left=NULL;
    p->right=NULL;

    //second node

     struct node * p1=NULL;
    p1=(struct node *)malloc(sizeof(struct node ));

    p1->data=34;
    p1->left=NULL;
    p1->right=NULL;

    p->left=p1;

    cout<<p->left->data<<endl;





    return 0;
}