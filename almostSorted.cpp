#include <iostream>

int modifiedBinSearch(int arr[],int size,int key) {
	
	int low,high,mid;
	low=0;
	high=size;
	while(low<high) {
		mid = (low+high)/2;
		//std::cout<<mid<<"\n";
		
		if(arr[mid] == key)
			return mid;
		
		else if(arr[mid+1]==key)
			return mid+1;
		
		else if(arr[mid-1]==key)
			return mid-1;
		
		else if(key < arr[mid])
			high = mid-1;
		
		else if(key > arr[mid])
			low = mid+1;
		
	}
	return -1;
}

int main() {
	int arr[]={10,3,40,20,50,80,70};
	int n = 7;
	int key;
	std::cout<<"Enter search query: ";
	std::cin>>key;
	std::cout<<"Element found at position: "<<modifiedBinSearch(arr,n,key);
	
	return 0;	
}
