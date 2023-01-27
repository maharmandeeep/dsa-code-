#include<bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node * left;
    struct node * right;
};


struct  node * create(int key){
    struct node * ptr=(struct node *)malloc(sizeof(struct node ));
    ptr->data=key;
    ptr->left=NULL;
    ptr->right=NULL;


return ptr;
        

}


void printinorder(struct node * ptr){
    if(ptr!=NULL){
        printinorder(ptr->left);
        cout<<ptr->data<<" ";
        printinorder(ptr->right);
    }
}


void inorder_iterative(  node* root) {
    stack< node*> s;
     node* current = root;
    while (current != NULL || !s.empty()) {
        while (current != NULL) {
            s.push(current);
            current = current->left;
        }
        current = s.top();
        s.pop();
        cout << current->data << " ";
        current = current->right;
    }
}





int main(){

    // struct node * n=(struct node *)malloc(sizeof(struct node));

    // n->=1;
    // n->left=NULL;
    // n->right=NULL;

        struct node * n=create(1);
         struct node * n1=create(2);
          struct node * n2=create(3);
          struct node * n3=create(4);
          struct node * n4=create(5);

          n->left=n1;
          n->right=n2;

          n1->left=n3;
          n1->right=n4;


         // cout<<n->data<<endl;

       //  printinorder(n);

         inorder_iterative(n);





    return 0;
}