#include<bits/stdc++.h>

using namespace std;

void selesort(int arr[],int n){
        int minid;
    for(int i=0;i<n-1;i++){
            minid=i;

            for(int j=i+1;j<n;j++){

                if(arr[j]<arr[minid]){
                    minid=j;
                }
            }
            swap(arr[minid],arr[i]);

    }
}

int main(){

        int arr[6]={4,2,5,1,6,9};

        selesort( arr, 6);

        for(int i=0;i<6;i++){

            cout<<arr[i]<<endl;
        }


    return 0;
}
