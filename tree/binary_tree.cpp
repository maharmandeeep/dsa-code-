#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node *right;
};


struct node * create_node(int data){
    struct node * n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;
}

void preorder(struct node * root){
    if(root != NULL){
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
    }
}

void postorder(struct node * root){
    if(root != NULL){
    

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    }
}

void inorder(struct node * root){
    if(root != NULL){
    

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
    }
}

int main(){
      /*/  struct node * p;
        p=(struct node *)malloc(sizeof(struct node));
        p->data=1;
        p->left=NULL;
        p->right=NULL;
        
        //this is  creating second node
            struct node * p1;
         p1=(struct node *)malloc(sizeof(struct node));
        p1->data=2;
        p1->left=NULL;
        p1->right=NULL;


        //this is third node
        struct node * p2;
         p2=(struct node *)malloc(sizeof(struct node));
        p2->data=3;
        p2->left=NULL;
        p2->right=NULL; */


        struct node* p=create_node(1);
         struct node* p1=create_node(2);
          struct node* p2=create_node(3);


        //connnect p1 and p2 to its parent root node

        p->left=p1;
        p->right=p2;

        preorder(p);
        cout<<endl;

        postorder(p);

        cout<<endl;

        inorder(p);


    return 0;
}