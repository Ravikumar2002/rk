#include<iostream>
using namespace std;
int multiply(int arr[],int n)
{
	int multi=1;
	for(int i=0;i<n;i++){
		multi*=arr[i];
	}
	return multi;
}

int getsum(int arr[],int n){
	int sum =0;
<<<<<<< HEAD
	//edited 
=======
>>>>>>> ramesh/multi
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
	cout<<multiply(arr,n);


	return 0;

}