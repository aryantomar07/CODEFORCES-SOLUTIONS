#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
int n;
cin>>n;
int z=n/5;
if(n%5>0)
{
	z++;
}
cout<<z<<endl;
}
