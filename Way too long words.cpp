#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    if(n%2==0 && n>2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
 
	while(n--)
	{
	string s;
	cin>>s;
	int z=s.length();
	if(z>10)
	{
	cout<<s[0]	;
	cout<<z-2;
	cout<<s[z-1];
	cout<<endl;
	}
	else
	{
		cout<<s<<endl;
	}
		}

}
}
