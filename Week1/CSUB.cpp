#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	   int n,count=0;
	    long long int substring=0;
	    cin >> n;
	    string str;
	    cin >> str;
	    for(int i=0;i<n;i++){
	        if(str[i]=='1'){
	            count++;
	            substring+=count;
	        }
	    }
	    cout << substring << endl;
	}
	return 0;
}
