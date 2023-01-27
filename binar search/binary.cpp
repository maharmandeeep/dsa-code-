#include<iostream>

using namespace std;

int binarysearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    
    while(start<=end){

        int m=start +(end-start)/2; 

        if(arr[m]==key){
            return m;
        }

        if(key<arr[m]){
            end=m-1;
        }
        if(key>arr[m]){
            start=m+1;
        }
    }

    return -1;
}

int main(){

        int arr[5]={1,2,3,4,5};

        int size=sizeof(arr)/sizeof(arr[0]);

        //  index= binarysearch(arr,size,4);

        cout<<"the searched number index is "<<binarysearch(arr,size,4);




        
    return 0;
}