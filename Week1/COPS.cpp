#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int m,x,y;
	    cin>>m>>x>>y;
	    int a[m];
	    int range=x*y;
	    for(int i=0;i<m;i++)
	        cin>>a[i];
	    int check[101]{0};
	    
	    for(int i=0;i<m;i++)
	    {
	        for(int j=max(1,a[i]-range);j<=min(100,a[i]+range);j++)
	        {
	            check[j]=1;
	        }
	    }
	    int count =0;
	    for(int i=1;i<=100;i++)
	    {
	        if(check[i]!=1)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	
	
	return 0;
}
