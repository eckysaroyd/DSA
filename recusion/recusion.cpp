//recusion program
#include<iostream>
using namespace std;

int f(int n){
	int k,r;
	if(n==0){
			return 0;	
	}
	
		
	k=n*n;
	r=f(n-1);
	return k+r;
	
	
}
int mauin(){
	//get input
	int x,y;
	cout<<"Enter the value of X : ";
	cin>>x;
	
	//	call f
	y=f(x);
	
	//print return
	cout<<y<<endl;
	return 0;
}
