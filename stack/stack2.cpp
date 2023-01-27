#include<bits/stdc++.h>

using namespace std;

struct stackaa{
        int size;
        int top;
        int *arr;
};

void push(struct stackaa *s,int val){
    if(s->top==s->size-1){
        cout<<"condtion is overflow"<<endl;
    }
    else{
        s->top++;
        s->arr[s->top]=val;
    }
}

int  pop(struct stackaa *s){

    int val;
    if(s->top==-1){
        cout<<"condition underflow"<<endl;
    }
    else{
         val=s->arr[s->top];
        s->top--;
        
    }
        return val;
}



int main(){

    struct stackaa *s=(struct stackaa *) malloc(sizeof (struct stackaa));

    //(*s).size=80;
    s->size=8;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));

    push(s,10);

    cout<<pop(s)<<endl;

    cout<<s->top;
    





    return 0;
}

