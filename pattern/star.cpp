#include<bits/stdc++.h>

using namespace std;

// int main(){

//     int n;
//     cout<<"give"<<endl;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         int space=n-i-1;
//        while(space){
//         cout<<" ";
//         space=space-1;

//        }
//         for(int k=0;k<=i;k++){
//             cout<<"*";
//         }

//         cout<<endl;

//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=(n-i-1);j>=0;j--){
//                 cout<<"*";
//         }
//         cout<<endl;
//     }


//     return 0;
// }

// int main(){

//         int n;
//         cin>>n;

//         for(int i=0;i<n;i++){

            
//             int count =1;
//                 int space=n-i-1;
//                 while(space){
//                     cout<<" ";
//                     space=space-1;
//                 }

//                 for(int j=0;j<=i;j++){
//                     cout<<count;
//                     count++;
//                 }

//                 int start=i;

//                 while(start){
//                     cout<<start;
//                     start=start-1;
//                 }

//                 cout<<endl;

//         }
//     return 0;

// }



//last love babbar pattern question
int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
            //first trinagle
        for(int j=0;j<(n-i);j++){
            cout<<(j+1);
        }

        //second triangle
        for(int k=1;k<=i;k++){
            cout<<"**";
        }

        //third triangle
        for(int l=0;l<(n-i);l++){
            cout<<(n-l-i);
           
        }
        cout<<endl;
    }
    return 0;
}

