#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , c;
        cin>>n; cin>>c;
        int arr[n];
        for(int i=0; i<n; ++i){
            cin>>arr[i];
            c = c-arr[i];
        }
        if(c<0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        
    }
    
    return 0;
}