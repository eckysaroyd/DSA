#include<iostream>
using namespace std;

int main(){
	int array[6]= {2,4,6,9,5,7};
	int n;
	
	n=sizeof(array)/sizeof(array[0]);
	
	for(int i=0; i<n; i++)
	{
		cout<<array[i]<<endl;
	}
	system("pause");
	return 0;
	
}
