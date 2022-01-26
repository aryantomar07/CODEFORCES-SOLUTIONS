#include<iostream>
using namespace std;
int main()
{
int n,h;
cin>>n>>h;
int a[n];
for(int i=0; i<n; i++)
{
	cin>>a[i];
}
int c=0,d=0;
for(int i=0; i<n; i++)
{
	if(a[i]<=h)
	{
		c++;
	}
	else
	{
		d++;
	}
 } 
 cout<<d*2+c<<endl;
}
