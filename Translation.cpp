#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
 
int main() {
string s,t;
cin>>s>>t;
int n=s.length();
bool flag=true;
bool flag2=true;
for(int i=0; i<s.size(); i++)
{
	if(s[i]==t[n-1-i])
	{
		flag=true;
	}
	else
	{
		flag2=false;
	
	}
}
if(flag2==false)
{
	cout<<"NO"<<endl;
}
else
{
	cout<<"YES"<<endl;
}
 
 
}
