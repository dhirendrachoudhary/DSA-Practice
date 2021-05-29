#include <iostream>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll x,y,k,n;
	    ll flag=0;
	    cin>>x;cin>>y;cin>>k;cin>>n;
	    ll p[n], c[n];
	    for(ll i=0; i<n; i++){
	            cin>>p[i];
	            cin>>c[i];
	        }
	        
	    for(ll i=0; i<n; i++){
	        if(p[i]>=(x-y) && c[i]<=k){
	            cout<<"LuckyChef"<<endl;
	            flag--;
	            break;
	        }
	    }
	    if (flag==0) cout<<"UnluckyChef"<<endl;
	    
	}
    
    return 0;    
}

