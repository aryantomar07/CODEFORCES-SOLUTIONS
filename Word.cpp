#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
 
int main() {
string s;
cin>>s;
int lc=0,uc=0;
for(int i=0; i<s.size(); i++)
{
	if(isupper(s[i]))
	{
      uc++;
	}
	else{
		lc++;
	}
}
if(lc>=uc)
{
for(int i=0; i<s.size(); i++)
{
	s[i]=tolower(s[i]);
}
cout<<s<<endl;
}	
else{
	for(int i=0; i<s.size(); i++)
{
	s[i]=toupper(s[i]);
}
cout<<s<<endl;
}
}
