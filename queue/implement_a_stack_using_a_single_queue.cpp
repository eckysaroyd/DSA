#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>q;
	int count=0,ch;
	
	cout<<"1. Push into stack\n";
	cout<<"2. Pop from stack\n";
	cout<<"3. Print the stack\n";
	cout<<"4. Exit the program\n";
	
	do{
		cout<<endl<<"Enter Choise\n";
		cin>>ch;
		switch(ch){
			case 1:{
				
				int item;
				cout<<"Enter the item to push \n";
				cin>>item;
				q.push(item);
				count++;
				break;
			}
			case 2:{
				if(q.empty()){
					cout<<"Stack is empty\n";
				}else{
					for(int i=0;i<count-1;i++){
						int k=q.front();
						q.pop();
						q.push(k);
						
					}
					count--;
					cout<<"Pop item is "<<q.front()<<"\n";
					q.pop();
					}
				break;
			}
			case 3:{
				if(q.empty()){
					cout<<"Stack is empty\n";
				}else{
						for(int i=0;i<count;i++){
							cout<<q.front()<<" ";
							q.push(q.front());
							q.pop();						}
				}
				break;
			}
			case 4:{
				return 0;
//				break;
			}
			default:{
				cout<<"Please enter the valid choise"<<endl;
				break;
			}
				
		}
	}while(ch!=4);
	return 0;
}
