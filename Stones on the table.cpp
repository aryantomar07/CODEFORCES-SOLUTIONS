#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int res=0;
	for(int i=0; i<n; i++)
	{
		
		if(s[i]==s[i+1])
		{
         res++;
		}
	
	}
	cout<<res<<endl;
}
