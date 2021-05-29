#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        string first, second;
        int n = s.length();
        for(int i=0;i<n/2;i++)
        {
            first+=s[i];
            second+=s[n-i-1];
        }
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        
        if(first == second)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}