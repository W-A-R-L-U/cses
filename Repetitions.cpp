#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int ans=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) count++;
        else{
            ans=max(count,ans);
            count=1;
        }
    }
    cout<<max(ans,count);
    return 0;
}