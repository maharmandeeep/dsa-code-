#include<bits/stdc++.h>

using namespace std;


struct que{
    int size;
int f;
int r;
int * arr;
};

int qempty(struct que* q){
    if(q->f==-1 || (q->f)>(q->r)){ 
        return 1;
    }

    return 0;
    
}

int qfull(struct que * q){
    if(q->r==(q->size-1)){
        return 1;
    }
    return 0;
}

void enqueue(struct que * q,int key){

    if(qfull(q)){
        cout<<"queue is full "<<endl;

    }
    else{
        if(q->f==-1){
            q->f=0;
        }
        q->r++;
        q->arr[q->r]=key;
    }
}

void qdelete(struct que * q){
        if(qempty(q)){
            cout<<"queue is underfow"<<endl;
        }
        else{
            cout<<q->arr[q->f]<<" this is delted from this queue"<<endl;
            q->f++;
        }
}


void Display(struct que * q) {
   if (q->f == - 1 || q->f>q->r)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = q->f; i <= q->r; i++)
      cout<<q->arr[i]<<" ";
      cout<<endl;
   }
}








int main(){

    //intilizig queue 

    struct que * q;
    q->size=100;
    q->f=-1;
    q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));

   

    return 0;
}