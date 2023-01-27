#include<bits/stdc++.h>

using namespace std;

int febo(int n){
    int ans;
    if(n==0)return 0;
    if(n==1)return 1;
   

     ans=febo(n-1)+febo(n-2);
     

    return ans;
}

int main(){

        int n;

        cout<<"enter te nth term ";
        cin>>n;

        for(int i=0;i<=n;i++){

        int f=febo(i);
        cout<<f<<endl;
        }

    return 0;
}

