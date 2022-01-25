#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[5][5];
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			cin>>a[i][j];
		}
	}
	int p,q;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(a[i][j]==1)
			{
				p=i;
				q=j;
			
			}
			
		}
	}
	int z=abs(p-2);
	int y=abs(q-2);
	cout<<z+y<<endl;
 
}
