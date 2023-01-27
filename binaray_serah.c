#include<stdio.h>
#include<conio.h>
 
 int main(){
     int arr[100],len,low,high,mid,ele;
      printf("print the size of aaray\n");
      scanf("%d",&len);
     
     printf("enter the array in incresing ordeer\n");
    for(int i=0;i<len;i++){

        scanf("%d",&arr[i]);
    }

    printf("enter the serch element which you want to search\n");
    scanf("%d",&ele);
    low=0;
    high=len-1;
    

    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==ele){
            printf("element  %d present in %d index\n",ele,(mid+1));
            break;
        }
        else if(ele<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }



     return 0;

 }