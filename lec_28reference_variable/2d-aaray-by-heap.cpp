#include<bits/stdc++.h>

using namespace std;
int main(){

        int n=3;
        int c=0;

        int** arr=new int* [n];

        for(int i=0;i<n;i++){
            arr[i]=new int [n];


        }

        //taking input 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=++c;

            }
            cout<<endl;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";

            }
            cout<<endl;
        }

        //free memory
        for(int i=0;i<n;i++){
            
            delete []arr[i];


        }

        delete []arr;


    
    return 0;
}
