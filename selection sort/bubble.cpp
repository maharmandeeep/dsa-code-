#include<bits/stdc++.h>

using namespace std;

void bubble(int arr[],int size){

      
    for(int i=1;i<size;i++){
                 bool swaped=false;
    

        for(int j=0;j<(size-i);j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swaped=true;
                }
        }

        if(swaped==false){
            break;
        }
    }
}


int main(){
        int arr[6]={8,2,58,1,9,3};

        int size=sizeof(arr)/sizeof(arr[0]);

        bubble(arr,size);

        for(int i=0;i<size;i++){

            cout<<arr[i]<<" ";
        }



    return 0;
}