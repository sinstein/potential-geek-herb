#include <stdio.h>
#define MAX(a,b) a>b?a:b

int main(){
	int n,i,j,sum1,sum2,sum=0;
	int arr1[]={5,6,7,8,9,10};
	int arr2[]={1,5,7,43};
	int n1=6,n2=4;
	
	sum1 = 0;
	sum2 = 0;
	
	for(i=0,j=0 ; i<n1 && j<n2 ;) {		
		
		if(arr1[i] < arr2[j]){
			sum1+=arr1[i];
			++i;
		}	
		else if(arr1[i] > arr2[j]) {
			sum2+=arr2[j];
			++j;
		}
		else if(arr1[i] == arr2[j]) {
			sum += MAX(sum1,sum2);
			sum +=arr1[i];
			++i;
			++j;
			sum1=0;
			sum2=0;
		}
	}
	
	if(i<n1) {
		for(;i<n1;i++)
			sum1+=arr1[i];
	}	
	if (j<n2) {
		for(;j<n2;j++)
			sum2+=arr2[j];
	}
	
	sum+=MAX(sum1,sum2);
	printf("Maximum sum found is: %d\n",sum);
	
	return 0;
}
