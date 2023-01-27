#include<bits/stdc++.h>

using namespace std;

void say_words(int n,string arr[]){
    if(n==0)return ;
  //  cout<<arr[n%10]<<endl;
        int digit=n%10;     
    n=n/10;

    

    say_words(n,arr);
    
     cout<<arr[digit]<<" ";
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
        say_words(n,arr);

    return 0;
}