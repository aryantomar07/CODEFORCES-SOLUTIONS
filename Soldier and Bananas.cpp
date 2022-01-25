#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
int k,n,w;
cin>>k>>n>>w;
int z=0;
for(int i=1 ; i<=w; i++)
{
	z=z+k*i;
}
if(z<=n)
cout<<"0"<<endl;
else
cout<<z-n<<endl;
 

