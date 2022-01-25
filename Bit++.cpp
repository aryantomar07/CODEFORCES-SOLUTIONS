#include<iostream>
using namespace std;
int main()
{
 int x=0;
 int n;
 cin>>n;
 while(n--)
 {
 string s;
 cin>>s;
 if(s=="++X")
 {
 	++x; 
	 }
else 	 if(s=="--X")
 {
 	--x; 
	 }
	 else if(s=="X++")
 {
 	x++; 
	 }
	else  if(s=="X--")
 {
 	x--; 
	 }
	 
 }
 cout<<x<<endl;
 
}
