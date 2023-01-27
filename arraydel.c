#include<stdio.h>


#include <stdio.h>

int main() {
    int a[100],pos,len,i;
    
    printf("enter the size of aaray\n");
    scanf("%d",&len);
    
    printf("enter the array on thelist\n");
    
     for(i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
     printf("neter the position of array which ou want to dlete");
     scanf("%d",&pos);

     for(i=pos-1;i<len;i++){
         a[i]=a[i+1];
     }
    len--;
    for(i=0;i<len;i++){
        printf("%d\n",a[i]);
    }

    
    
    return 0;
}