#include<bits/stdc++.h>

using namespace std;

int firstoccur(int arr[],int size,int key){

    int start=0;
    int end=size-1;
        int ans=-1;
    
    while(start<=end){

        int m=start +(end-start)/2; 

        if(arr[m]==key){
             ans=m;

             end=m-1;

        }

        if(key<arr[m]){
            end=m-1;
        }
        if(key>arr[m]){
            start=m+1;
        }
    }

    return ans;
}

int lastoccur(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int ans=-1;
    
    while(start<=end){

        int m=start +(end-start)/2; 

        if(arr[m]==key){
            ans=m;
            start=m+1;
        }

        if(key<arr[m]){
            end=m-1;
        }
        if(key>arr[m]){
            start=m+1;
        }
    }

    return ans;
}



int main(){

        int arr[12]={1,1,1,2,2,2,2,2,3,3,4,4};

        int size=sizeof(arr)/sizeof(arr[0]);

        cout<<"the first occurence of of 2 is "<<firstoccur(arr,12,3)<<endl;
        cout<<"the last occurence of of 2 is "<<lastoccur(arr,12,3);

        
    return 0;
}