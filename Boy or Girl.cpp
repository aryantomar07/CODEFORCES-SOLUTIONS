#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
string s;
cin>>s;
sort(s.begin(), s.end());
int count=s.length();
for(int i=1; i<s.length(); i++)
{
if(s[i]==s[i-1])
{
	count--;}
}
if(count%2==0)
{
	cout<<"CHAT WITH HER!"<<endl;
}
else{
	cout<<"IGNORE HIM!"<<endl;
}
}
