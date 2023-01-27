#include<bits/stdc++.h>

using namespace std;

bool palindrome_recur(string& str,int start,int end){
    if(start>end){
            return true ;
    }

    if(str[start]!=str[end]){
        return false;
    }

    start++;
    end--;

    //recurssive call
        palindrome_recur(str,start,end);

}



int main(){
        string str="moon";

       if( palindrome_recur(str,0,str.length()-1)){
        cout<<"this is a plaindrome";
       }
       else{
        cout<<"this is not a plaindrome";
       }

    return 0;
}