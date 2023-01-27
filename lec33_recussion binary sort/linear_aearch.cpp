#include<bits/stdc++.h>

using namespace std;

bool linear_search(int arr[],int size,int key){

        if(size==0){
            return false;
        }
        
            if(arr[0]==key){
                return true;
            
        }
        else{
        return linear_search(arr+1,size-1,key);
        }

}

int main(){
    int arr[5]={4,12,6,8,10};

    if(linear_search(arr,5,11)){
        cout<<"element is present"<<endl;
    }
else{
     cout<<"element is not present"<<endl;
}




    return 0;
}