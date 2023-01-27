#include<bits/stdc++.h>

using namespace std;

struct stacka {
    int size;
    int top;
    int *arr;
};



void push(struct stacka *ptr,int val){
    if(ptr->top==ptr->size-1){
         cout<<"the stack is in overflow condition ans can't print the "<<val<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}




int isfull(struct stacka *ptr){
    if(ptr->top==ptr->size-1){
            return 1;
    }

    else{
        return 0;
    }
}

int isempty(struct stacka *ptr){

    if(ptr->top==(-1)){
        return 1;
    }
    else{
        return 0;
    }
}

int pop(struct stacka *ptr){

    int val;
    if(isempty(ptr)){
        cout<<"stack is underflow conditon "<<endl;
    }
    else{
        val=ptr->arr[ptr->top];
        ptr->top--;

      return val;
    }

   return val;
}



int peek( stacka *ptr,int i){

        int topoint=ptr->top-i+1;

        if(topoint<0){
            return -1;
        }
        else{
            return ptr->arr[topoint]; 
        }
}

void printtt(struct stacka *ptr){
    for(int i=0;i<ptr->top;i++){

    }
}

int main(){

    struct stacka *s=(struct stacka *)malloc(sizeof(struct stacka));
    s->size=8;
    s->top=-1;
    s->arr=(int *) malloc(s->size * sizeof(int));

    push(s,100);
    push(s,200);
    push(s,300);
    push(s,400);
    push(s,500);
    push(s,600);
    push(s,700);
    push(s,800);
    push(s,900); //overflow condition size id assigned for only 8 interger 

   // pop(s);

    //cout<<s->arr[s->top]<<endl;

    // for(int i=s->top;i>=0;i--){
    //     cout<<s->arr[i]<<endl;
    // }

    // cout<<"in" <<3<<"position value is"<<peek(s,3);

    for(int i=1;i<=s->top+1;i++){

        cout<<"In "<<i<<"postion the value is"<<peek(s,i)<<endl; 
    }
    


    

    


    //cout<<isfull(s);
    
    

    
    



   
   

    



    



    return 0;
}