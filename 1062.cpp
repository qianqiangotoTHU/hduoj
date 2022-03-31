#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	stack<char> s;
	getchar();
	while(n--)
	{
		while(1)
		{
			char c;
			c=getchar();
			if(c=='\n') 
			{
				while(!s.empty())
				{
					cout<<s.top();
					s.pop();
				} 				
				cout<<c;
				break;
			}
			if(c==' ')
			{
				while(!s.empty())
				{
					cout<<s.top();
					s.pop();
				} 
				cout<<c;
				continue;
			}
			s.push(c);			
		}

	}
	return 0;
}

