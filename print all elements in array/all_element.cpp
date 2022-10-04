#include<iostream>

using namespace std;
int main()
{
 	int array[8] = {2,2,3,4,5,6,7,8};
  	int i = 0;
  
  	while (i < sizeof(array)/sizeof(int))
    {
    	cout << array[i] <<endl;
      	i++;
    }
    
}
