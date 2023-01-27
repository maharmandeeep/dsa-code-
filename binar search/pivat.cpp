#include<bits/stdc++.h>

using namespace std;

int getpivot(int arr[],int size){

    int start=0;
    int end=size-1;

    int m=start+(end-start)/2;
    while(start<end){
        if(arr[m]>=arr[0]){
            start=m+1;


        }

        else{
            end=m;
        }
        m=start+(end-start)/2;
    }
    return start;
}

int main(){

    int arr[10]={5,6,7,8,9,0,1,2,3,4};


    cout<<"the pivot is"<< getpivot(arr,10);

    return 0;
}