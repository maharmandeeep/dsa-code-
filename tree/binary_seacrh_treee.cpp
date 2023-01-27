#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node * left;
    struct node*right;
};

struct node * create_node(int data){
    struct node * n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;
}

void inorder(struct node * root){
    if(root != NULL){
        inorder(root->left);

        cout<<root->data<<" ";

        inorder(root->right);

    }
}

int isbst(struct node *root){

     static struct node *prev=NULL;
    if(root !=NULL){
        if(!isbst(root->left)){
                return 0;
        }

        if( prev!=NULL && root->data <=prev->data ){
                return 0;
        }

        prev=root;
        return isbst(root->right);
    }
    else{
        return 1;
    }
}

//recusive way to seacrh a element in a bst

node * search(struct node * root,int key){

    if(root ==NULL){
        return NULL;
    }

    if(root->data==key){
        return root;
    }
   
   else if(root->data<key){
    return search(root->right,key);
   }
   else{
    return search(root->left,key);
   }

}

//iterative way to seacrh a element oin bst
node * iteratives(struct node * root,int key){

while(root != NULL){
    if(root->data==key){
        return root;
    }
    else if(root->data<key){
        root=root->right;
    }
    else{
        root=root->left;
    }
}
return NULL;
}

//insertion in bst

void insert(struct node * root,int key){
   struct node * pre=NULL;
while(root!=NULL){
    pre=root;
   if(root->data==key){
    cout<<"element is already present in a given bst"<<endl;
    return ;
   }
   else if(key>root->data){
    root=root->right;
   }
   else{
    root=root->left;
   }
}

struct node *ptr=create_node(key);

if(key>pre->data){
    pre->right=ptr;
}
else{
    pre->left=ptr;
}
}

//inorder pre nikalne k loye code jo ki deltion m cahiye h

struct node * inorderpre(struct node * root){
    root=root->left;

    while(root->right!=NULL){
        root=root->right;
    }

    return root;
} 



//delteion in bst
struct node * delete_node(struct node *root,int key){

        struct node *ipre;
        if(root ==NULL){
            return NULL;
        }

        if(root->right==NULL && root->left==NULL){
            free(root);
            return NULL;
        }



    if(key>root->data){
        root->right=delete_node(root->right,key);
    }

    else if(key<root->data){
        root->left=delete_node(root->left,key);
    }

    else{
        ipre=inorderpre(root);
        root->data=ipre->data;
        //ipreka jhase hamne liya jo ki left tre ka right most node hoa se v del kara same proecess se 
        root->left=delete_node(root->left,ipre->data);
    }

    return root;

}











int main(){

    struct node *p=create_node(10);
     struct node *p1=create_node(8);
      struct node *p2=create_node(15);
       struct node *p3=create_node(4);
        struct node *p4=create_node(9);
         struct node *p5=create_node(11);
          struct node *p6=create_node(20);



          /*            10
                       /   \ 
                      8     15  
                    /  \   /  \  
                   4    9 11    20
          
          
          
          
          
          */
       

           

           // linking all node 
            p->left=p1;
            p->right=p2;

            p1->left=p3;
            p1->right=p4;

            p2->left=p5;
            p2->right=p6;

            

            inorder(p);
            cout<<endl;
            cout<<isbst(p);

            cout<<endl;
            

            // struct node * newl=iteratives(p,7);

            // if(newl != NULL){
            //     cout<<newl->data<<endl;
            // }
            // else{
            //     cout<<"element not found"<<endl;
            // }

            insert(p,7);

            inorder(p);

            cout<<endl;

             delete_node(p,10);

               inorder(p);
            


            
    

    return 0;
}