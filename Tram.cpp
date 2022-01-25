#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int count=0;
    int maxi=0;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		count=count+(b-a);
		maxi=max(count,maxi);
	}
	cout<<maxi<<endl;
}
