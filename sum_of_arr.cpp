#include<iostream>
using namespace std;

int getsum(int arr[],int n){
	int sum =0;
	//change
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	return sum;
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<getsum(arr,n);


	return 0;

}