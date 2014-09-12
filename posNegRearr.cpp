#include <iostream>

int main() {
	int arr[]={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
	int n=10;
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
		
	for(int i=0;i<n;i++) {
		
		if(i%2 == 0 && arr[i]<0) {
			
			int j;
			for(j=i;j<n;j++) {
				if(arr[j]>0)
					break;
			}
			
			if(j==n) break;
				
			int temp =arr[j];
			for(int k=j-1;k>=i;k--) {
				arr[k+1]=arr[k];
			}
			arr[i]=temp;
		}
		
		else if(i%2!=0 && arr[i]>0) {
			
			int j;
			for(j=i;j<n;j++) {
				if(arr[j]<0)
					break;
			}
			
			if(j==n) break;
			
			int temp=arr[j];
			for(int k=j-1;k>=i;k--) {
				arr[k+1]=arr[k];
			}
			arr[i]=temp;
		}
		
		for(int l=0;l<n;l++)
		printf("%d\t",arr[l]);
		printf("\n");
	}
	
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
		
	return 0;
}
