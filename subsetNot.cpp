#include <iostream>

using namespace std;

int main() {

	int arr[]={1,1,6,7};
	int sum=1;
	for(int i=0;i<5;i++) {
		if(sum>=arr[i])
			sum+=arr[i];
		else 
			break;
	}
	printf("%d\n",sum);
}
