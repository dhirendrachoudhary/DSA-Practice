#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    sort(a,a+n);
	    int s=0;
	    for(int i=0;i<n;i++)
	    s+=(a[i]-a[0]);
	    
	    cout<<s<<endl;
	}
	return 0;
}
