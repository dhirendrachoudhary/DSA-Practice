#include <iostream>
using namespace std;

int check(){
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>7)
            c=1;
    }
    if(c==1||a[n/2]!=7||a[0]!=1)
        return 0;
    
    int k=n-1,r=1;
    for(int i=0;i<n/2;i++){
        if(a[i]==r&&a[i]==a[k--]){
            if(a[i+1]==r+1||a[i+1]==r)
                r=a[i+1];
            else
                return 0;
        }
        else
            return 0;
    }
    return 1;
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    if(check())
	        cout<<"yes"<<endl;
	    else
	        cout<<"no"<<endl;
	}
	return 0;
}
