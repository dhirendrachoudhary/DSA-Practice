#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int n,k;
		cin>>n>>k;
		string s[n];
		for(int j=0; j<n; j++)
			cin>>s[j];
		int a[n]={0};
		for(int j=0; j<k; j++)
		{
			int l;
			cin>>l;
			string m[l];
			for(int k=0; k<l;k++)
			{
				cin>>m[k];
				for(int q=0; q<n; q++)
				{
					if(m[k]==s[q])
						a[q]+=1;
				}
			}
		}
		for(int j=0; j<n; j++)
		{
			a[j] ? cout<<"YES"<<" " : cout<<"NO"<<" " ;
		}
		cout<<endl;
	}
	return 0;
}