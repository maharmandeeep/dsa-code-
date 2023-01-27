#include<bits/stdc++.h>

using namespace std;

void prinumt(int n){
    if(n==0){
        return ;

    }
    cout<<n<<endl;

    prinumt(n-1);
}

void prinumh(int n){
    if(n==0){
        return ;

    }
     prinumh(n-1);
    cout<<n<<endl;

    
}

int main(){
        int n=5;

        prinumt(n);

        cout<<"    "<<endl;


        
        
        prinumh(n);
        
    return 0;
}