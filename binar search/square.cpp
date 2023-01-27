#include<bits/stdc++.h>

using namespace std;

 long long int binary(int n){
        
        int s=0;;
        int e=n;
        long long int ans=-1;
        
        long long int mid=s+(e-s)/2;
        
        while(s<=e){
            long long int sq=mid*mid;
            if(sq==n){
               return mid;  }
            
            if(sq<n){
                ans=mid;
            
                s=mid+1;
            }
            
            else{
                e=mid-1;
                
            }
            
            mid=s+(e-s)/2;
        }
        
        return ans;
    }

    double moreprecision(int n,int precision,int preans  ){

        double factor=1;
        double ans=preans;

        for(int i=0;i<precision;i++){
            factor=factor/10;

            for(double j=ans;j*j<n;j=j+factor){
                ans=j;
            }
        }

        return ans;
    }

int main(){

            int n=37;

            int preans=binary(n);

            cout<<"suuare root of given number  "<<moreprecision(n,3,preans);


    return 0;
}