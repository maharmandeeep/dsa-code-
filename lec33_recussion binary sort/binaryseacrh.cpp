#include<bits/stdc++.h>

using namespace std;

void print_arr(int arr[],int start,int end){

    for(int i=start;i<end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int  binary_search(int arr[],int start,int end,int key){

    print_arr(arr,start,end);

   if(start>end){
       return -1 ;
    }

    int mid=start+(end-start)/2;

    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]>key){
        return binary_search(arr,start,mid-1,key);
    }
    else{
        return binary_search(arr,mid+1,end,key);
    }
}

int main(){
        int arr[7]={1,2,3,4,5,6,7};

        

       cout<< binary_search(arr,0,6,4);

    return 0;
}