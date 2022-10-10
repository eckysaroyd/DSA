#include <bits/stdc++.h>

using namespace std;
int main()
{
 	int array[9] = {20,2,3,4,5,6,7,8,11};
     // Compute the sizes
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < n; i++)
        
	{
		cout << array[i] << " "<<endl;	
	}
 
    // Find the minimum element
    cout << "\nMin Element = "<< *min_element(array, array + n);
}
