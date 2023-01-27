#include<bits/stdc++.h>

using namespace std;

bool isaorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isaorted(arr+1,size-1);
    }

    return true;
}

int main(){

        int arr[5]={1,2,3,4,5};

        if(isaorted(arr,5)){
            cout<<"this is sorted"<<endl;
        }
            else{
                cout<<"not sorted"<<endl;
            }

    return 0;
}