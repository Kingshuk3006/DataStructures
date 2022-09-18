#include<iostream>
using namespace std;

bool binarySearch(int arr[], int element, int low, int high){
	if(high-low > 1){
		int mid = (high+low)/2;
		if(element == arr[mid]){
			return true;
		}else{
			return	element > mid ?  binarySearch(arr,element, mid, high) :  binarySearch(arr,element, 0, mid);
		}
		
	}else{
		return false;
	}
	
}

int main()
{
	int size, temp;
	cout<<"Enter size of Array:\t";
	cin>>size;
	
	int arr[size];
	for(int i = 0; i < size; i++){
		cout<<"Enter Element:\t";
		cin>>arr[i];
	}
	
	for(int i = 0; i< size; i++){
		for(int j = i+1; j< size; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
//	for(int i = 0; i < size; i++){
//		cout<<arr[i];
//	}

	int element;
	cout<<"Enter number to search:\t";
	cin>>element;
	
	cout<<binarySearch(arr, element, 0, size-1), "Search Result";
	return 0;
}
