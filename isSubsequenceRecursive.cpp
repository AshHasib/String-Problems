#include<bits/stdc++.h>
using namespace std;


bool isSubsq(string s1,string s2,int l1,int l2)
{
	if(l1==0) return true;
	if(l2==0) return false;

	if(s1[l1-1]==s2[l2-1])
	{
		return isSubsq(s1,s2,l1-1,l2-1);
	}
	return isSubsq(s1,s2,l1,l2-1);
}

int main()
{
	string s1="QAQ",s2;
	cin>>s2;
	int len1=3;
	int len2=s2.length();
	int counter=0;
	for(int i=0;i<len2;i++)
	{
		if(s2[i]=='Q')
		{
			if(isSubsq(s1,s2,len1,len2) == true)
			{
				counter++;
			}
		}
	}
	printf("%d\n",counter);
	return 0;
}