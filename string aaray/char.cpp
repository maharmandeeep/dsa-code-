#include<bits/stdc++.h>
using namespace std;

int tolowercase(char ch){

        if(ch>='a'&& ch<='z'){
            return ch;
        }

        else{
            char tem=ch-'A'+'a';
            return tem;
        }
}

bool plai(char name[],int n){
    int s=0;
    int end=n-1;

    while(s<=end){
        if(tolowercase(name[s])!=tolowercase(name[end])){
            return false;
        }
        else{
            s++;
            end--;
        }
    }
    return true;
    
}


int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}



int main(){

        char name[20];

        cout<<"enter your name"<<endl;
        cin>>name;

        cout<<"your name is ";
        cout<<name<<endl;

        // cout<<getlength(name);

        int len=getlength(name);

        cout<<"this is a palindrome  "<<plai(name,len);
        
    return 0;
}
