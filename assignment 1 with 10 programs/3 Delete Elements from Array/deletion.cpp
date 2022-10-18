//delete elements in array cpp
#include<iostream>
using namespace std;

int main(){
	int value,size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int arr[size];
	
	cout<<"enter the values of array"<<endl;
	for(int i=0; i<size;i++)   
	
	cin>>arr[i];
	cout<<"enter the value you want to delete"<<endl;
	cin>>value;
	cout<<"Array after deletion"<<endl;
	for(int i=0;i<=size;i++){
		if(arr[i]==value){
			for(int j=i;j<=size;j++){
				arr[j]=arr[j+1];
			}
		}
	}size--;
	
for(int i=0;i<size; i++){
	cout<<arr[i]<<endl;
}
return 0;
}
