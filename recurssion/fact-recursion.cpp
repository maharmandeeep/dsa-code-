#include<bits/stdc++.h>

using namespace std;

int fact(int j){
    if(j==0){
        return 1;
    }
    else{
        return j*fact(j-1);
    }
}

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

         int ans=fact(n);
    cout<<ans;



}