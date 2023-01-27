#include<bits/stdc++.h>

using namespace std;

int sum_aaray(int arr[],int size){

    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];

    }
        int sum=arr[0];
     sum=sum+sum_aaray(arr+1,size-1);

    return sum;
}




int main(){

        int arr[5]={10,20,30,40,50};

       cout<< sum_aaray(arr,5);

    return 0;
}