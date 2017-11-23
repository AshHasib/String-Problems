#include<bits/stdc++.h>
using namespace std;

bool isSubsq(string,string,int,int);

int main()
{
	string s1;
	string s2;
	int l1,l2;
	cout<<"We will see if string 2 is a subsequence of string 1 or not\n";

	cout<<"Enter 1st string:";
	cin>>s1;
	cout<<"Enter 2nd string:";
	cin>>s2;
	l1=s1.length();
	l2=s2.length();
	if(isSubsq(s1,s2,l1,l2)==true)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return 0;
}

bool isSubsq(string s1,string s2,int l1,int l2)
{
	int j=0;

	for(int i=0;i<l1&&j<l2;i++)
	{
		if(s2[j]==s1[i])
		{
			j++;
		}
	}
	printf("%d\n",j);
	return (j==l2);
}