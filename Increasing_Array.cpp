#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;cin>>a[i++]);
    long long ans=0;
    for(int i=1;i<n;i++){
        ans+=max(0,a[i-1]-a[i]);
        a[i]+=max(0,a[i-1]-a[i]);
    }
    cout<<ans;
    return 0;
}