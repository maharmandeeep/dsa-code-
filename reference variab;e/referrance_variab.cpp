#include<bits/stdc++.h>

using namespace std;

int main(){
        // int i=5;

        // int& j=i;

        // cout<<j<<endl;

        // int n;
        // int arr[n]; //this is bad practice it large and our stack area not as much large this "n "
        // //so then program give error so we have make size aloocate dynamically
        // cin>>n;

        int n;

        int *p= new int[n];

        
        cout<<"enter the n value"<<endl;

        cin>>n;

            cout<<"enter the aaray value"<<endl;
        for(int i=0;i<n;i++){

            cin>>p[i];
        }

        
         for(int i=0;i<n;i++){

            cout<<p[i]<<endl;;
        }

        delete []p;


        for(int i=0;i<n;i++){

            cout<<p[i]<<endl;;
        }

        

      



    return 0;
}