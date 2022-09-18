#include<iostream>
#include<stdlib.h>

using namespace std;

int* merge(int arr1[], int arr2[], int size1, int size2){
	int * mergeArr = (int *)malloc(sizeof(int)*(size1+size2));
	
	int i = 0,j = 0,k = 0;
	while(i < size1 && j<size2){
		if(arr1[i] < arr2[j]){
			mergeArr[k++] = arr1[i++];
		}else{
			mergeArr[k++] = arr2[j++];
		}
	}
	
	for(;i< size1; i++){
		mergeArr[k++] = arr1[i];
	}
	
	for(;j< size2; j++){
		mergeArr[k++] = arr2[j];
	}
	
	return mergeArr;
	
}

int main(){
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {3, 4, 5, 6, 7};
	int* mergeArr = merge(arr1, arr2, 5, 5);
	
	for(int i = 0; i < 10; i++){
		cout<<*(mergeArr + i)<<endl;
	}
	
	return 0;
}


