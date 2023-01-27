#include<bits/stdc++.h>

using namespace std;


int gcd(int a,int b){
    if(a==0){
        return b;  
    }
    if(b==0){
        return a;
    }

   while(a!=b){
    if(a>b){
        a=a-b;
    }

    else{
        b=b-a;
    }
   }
} 

int main(){

    int a,b;
    cout<<"give the number a and b and do gcd operation i that"<<endl;
    cin>>a>>b;

    int ans;
    return 0;
}