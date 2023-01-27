#include <stdio.h>

int main(){
	int arr[10] = { 7, 9, 12, 13, 44, 82, 101, 127,127,299 } , low = 0 , high = 9, mid , result , elem;
	mid = (low + high) / 2; 
	scanf("%d", &elem);
	while(1) {
		if(arr[mid] == elem) {
			result = mid; 
			break;
		}
		if( low == high) {
			result = -1;
			break;
		}
		if(arr[mid] < elem) 
			low = mid + 1 ;
		else if (arr[mid] > elem) 
			high = mid - 1;
		mid = (low + high) / 2 ;
	}
	printf("%d", result);
	return 0 ; 
}
