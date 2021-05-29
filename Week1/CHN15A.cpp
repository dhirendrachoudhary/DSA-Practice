#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
         int res=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]+=k;
            if(a[i]%7==0){
                res++;
            }
        }
        cout<<res<<endl;
    }
	return 0;
}
