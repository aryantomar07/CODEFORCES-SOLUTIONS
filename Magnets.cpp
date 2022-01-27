#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
 
int main() {
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++ )
{
	cin>>a[i];
}
bool flag=true;
for(int i=0; i<n; i++)
{
	if(a[i]==1)
	{
		flag=false;
	}
}
if(flag==true)
cout<<"EASY"<<endl;
else
cout<<"HARD"<<endl;
}
