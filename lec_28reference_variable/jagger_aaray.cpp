#include<bits/stdc++.h>

using namespace std;

int main(){

        int row;
        cout<<"enter row number"<<endl;
        cin>>row;
        int c=0;

        int * col= new int[row];

        int** arr= new int*[row];

        for(int i=0;i<row;i++){
                
                cout<<"enter colum size fir this "<<i<<"th row"<<endl;
                cin>>col[i];
            arr[i]= new int[col[i]];
        }

        //taking input;

        for(int i=0;i<row;i++){
            for(int j=0;j<col[i];j++){
                    arr[i][j]=++c;
            }
        }

        //output
        for(int i=0;i<row;i++){
            for(int j=0;j<col[i];j++){
                    cout<<arr[i][j]<<" ";
            }
            cout<<endl;

        }

        //free space

         for(int i=0;i<row;i++){
                
               
           delete []arr[i];
        }

        delete []arr;



    return 0;
}