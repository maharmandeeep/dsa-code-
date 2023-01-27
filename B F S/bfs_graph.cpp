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

int  qdelete(struct que * q){

        int a=-1;
        if(qempty(q)){
            cout<<"queue is underfow"<<endl;
        }
        else{
           // cout<<q->arr[q->f]<<" this is delted from this queue"<<endl;
            
             
            q->f++;
             a=q->arr[q->f];
                       

        }
        return a;
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
    q->size=10;
    q->f=-1;
    q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));

   




    // bfs implementation

       int  node ;
        int i=0;
        int visited[7]={0,0,0,0,0,0,0};

        int a[7][7]={
            {0,1,1,1,0,0,0},
            {1,0,1,0,0,0,0},
            {1,1,0,1,1,0,0},
            {1,0,1,0,1,0,0},
            {0,0,1,1,0,1,1},
            {0,0,0,0,1,0,0},
            {0,0,0,0,1,0,0}
        }; 

        cout<<i<<" "; //print the current node 

        visited[i]=1;//trck waht node we visited

        enqueue(q,i);

        while(!qempty(q)){

            int node=qdelete(q);

            for(int j=0;j<7;j++){
                if(a[node][j]==1 && visited[j]==0){
                    cout<<j<<" ";
                    visited[j]=1;
                    enqueue(q,j);
                }
            }

        }
        
    
    return 0;
}