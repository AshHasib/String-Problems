#include<bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cout<<"Enter a string:";
	cin>>S;
	bool flag=true;
	int len=S.length();
	for(int i=0;i<len;i++)
	{
		if(S[i]!=S[len-i-1])
		{
			flag=false;
			break;
		}
	}
	if(flag==true)
	{
		cout<<"The string is palindrome\n";
	}
	else 
	{
		cout<<"The string is not palindrome\n";
	}
	return 0;
}