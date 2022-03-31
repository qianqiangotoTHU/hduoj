#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	vector<int>v;
	while(~scanf("%d%d",&n,&m)){
		for(int i=0;i<2*n;i++) v.push_back(i);
		int pos=0;
		for(int i=1;i<=n;i++) 
		{
			pos=(pos+m-1)%v.size();
			v.erase(v.begin()+pos);
		}
		for(int i=0;i<2*n;i++)
		{
			if(i==v[0])
			{
				cout<<"G";
				v.erase(v.begin());
			}
			else
			{
				cout<<"B";
			}
			if((i+1)%50==0&&i!=2*n-1) cout<<endl;
		}
		cout<<endl<<endl;
	}
	return 0;
}
