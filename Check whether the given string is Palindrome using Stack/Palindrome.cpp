
#include <bits/stdc++.h>
using namespace std;

// Function that returns true
// if string is a palindrome
bool isPalindrome(string s)
{
	int length = s.size();

	// Creating a Stack
	stack<char> st;

	// Finding the mid
	int i, mid = length / 2;

	for (i = 0; i < mid; i++) {
		st.push(s[i]);
	}

	// Checking if the length of the string
	// is odd, if odd then neglect the
	// middle character
	if (length % 2 != 0) {
		i++;
	}

	char ele;
	// While not the end of the string
	while (s[i] != '\0')
	{
		ele = st.top();
		st.pop();

	// If the characters differ then the
	// given string is not a palindrome
	if (ele != s[i])
		return false;
		i++;
	}

return true;
}
int main()
{
	string parl;
	cout <<"enter a word to check if is palindrome or not"<<endl;
	cin>>parl;
	string s=parl;
	if (isPalindrome(s)) {
		cout << endl<<"Yes: "<<parl<<" Is Palindrome ";
	}
	else {
		cout << "No: "<<parl<<" Is not Palindrome ";
	}

	return 0;
}

