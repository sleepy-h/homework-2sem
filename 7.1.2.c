#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
	*b+=*a;
	*a=*b-*a; 
	*b-=*a;
}

int main(){
	int len;
	char check = 1;
	scanf("%d",&len);
	int *arr = (int*) malloc(len * 4);
	for (int i = 0; i < len; ++i){
		scanf("%d",&arr[i]);
	}
	for (int i = len / 2; i ; i /= 2){
		for (int j = i; j < len; ++j){
			for ( int k = j; k >= i && arr[k-i] > arr[k] ; k -= i)
				swap(&arr[k-i],&arr[k]);
		}
	}
	for (int i = 0;i < len; ++i){
		printf("%d\n",arr[i]);
	}
	return 0;
}