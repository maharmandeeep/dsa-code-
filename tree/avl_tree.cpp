#include<bits/stdc++.h>

using namespace std;


struct node {

int data;
struct node * left;
struct node * right;
int height;
};

int getheight(struct node *n){
    if(n==NULL){ 
        return 0;

    }
    return n->height;
}

struct node * createnode(int key){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=key;
    n->left=NULL;
    n->right=NULL;
    n->height=1;  
    return n;
    
}

int getbalancefactor(struct node *n){
    if(n==NULL){
        return 0;
    }
    return getheight(n->left)-getheight(n->right);
}

struct node * rightrotate(struct node * y){
    struct node *x=y->left;
    struct node *t2=x->right;

    x->right=y;
    y->left=t2;

    x->height=1+max(getheight(x->right),getheight(x->left));
    y->height=1+max(getheight(y->right),getheight(y->left));

    return x;
}

struct node * leftrotate(struct node * x){
    struct node *y=x->right;
    struct node *t2=y->left;

    y->left=x;
    x->right=t2;

    x->height=1+max(getheight(x->right),getheight(x->left));
    y->height=1+max(getheight(y->right),getheight(y->left));

    return y;
}



struct node * insert(struct node * root,int key){

   if(root==NULL){
    return (createnode(key));

   }

   if(key > root->data){
    root->right=insert(root->right,key);

   }

   else if(key<root->data){
    root->left=insert(root->left,key);
   }

   else{
    cout<<"node is already present "<<endl;
    return root;
   }

   int bf=getbalancefactor(root);

   //for LL insertionn 
   if(bf>1 && key < root->left->data){
      return rightrotate(root);
   }
 //RR inserton
   if (bf<-1 && key > root->right->data){

       return leftrotate(root);
   }

   //LR insertion

   if(bf >1 && key >root->left->data){
    root->left=leftrotate(root->left);
    return rightrotate(root);
   }

    //RL insertion

   if (bf <-1 && key <root->right->data){
    root->right=rightrotate(root->right);
    return leftrotate(root);
   }

   
  return root ;



}


void print_avl(struct node * root){
    if(root != NULL){

            

            print_avl(root->left);
             cout<<root->data<<" ";
            print_avl(root->right);
        
    }
}

int main(){

    struct node * root=NULL;
    root=insert(root,1);
     root=insert(root,2);
      root=insert(root,4);
       root=insert(root,5);
        root=insert(root,6);
        root=insert(root,3);


        print_avl(root);



    return 0;
}