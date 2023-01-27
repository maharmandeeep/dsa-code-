#include<bits/stdc++.h>

using namespace std;

void rever_string(string& str,int i,int j){
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    //recussive call

    rever_string(str,i,j);
}


int main(){
        string st="amndeep";

        rever_string(st,0,st.length()-1);

        cout<<st<<endl;
    return 0;
}

