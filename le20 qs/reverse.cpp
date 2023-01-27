
#include<bits/stdc++.h>
using namespace std;

vector<int > reversevec(vector<int> v){
    int s=0;
    int end=v.size()-1;

    while(s<=end){
        swap(v[s],v[end]);
        s++;
        end--;
    }
    return v;
}

void printvec(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    
   vector<int> v;

   v.emplace_back(6);
   v.emplace_back(5);
   v.emplace_back(4);
   v.emplace_back(3);
   v.emplace_back(2);
   v.emplace_back(1);

   vector<int> ans=reversevec(v);
   printvec(ans);

   


    return 0;
}