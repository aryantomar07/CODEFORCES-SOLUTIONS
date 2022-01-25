#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
 
int main() {
long long int n;
int res=0, count=0;
cin>>n;
while(n>0)
{
	int z=n%10;
	if(z==7 || z==4)
	{
		count++;
	}
 
	n=n/10;
}
if( count==7 || count==4)
{
	cout<<"YES"<<endl;
}
else 
{
	cout<<"NO"<<endl;
}
 
}
