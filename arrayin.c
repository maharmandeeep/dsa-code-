#include <stdio.h>

int main() {
    int a[100],pos,num,len,i;
    
    printf("enter the size of aaray\n");
    scanf("%d",&len);
    
    printf("enter the array on thelist\n");
    
    for(i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter the insert element\n");
    scanf("%d",&num);

    printf("enter the posotion where you want to insert the element\n");
    scanf("%d",&pos);

    for(i=len-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;

    len++;

    for(i=0;i<len;i++){
        printf("%d \n",a[i]);
    }
    
    return 0;
}