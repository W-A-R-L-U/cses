#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;cin>>a[i++]);
    unordered_map<ll,ll> mp;
    mp[0]=1;
    ll sum=0,ans=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        int r=(sum%n+n)%n;
        if(mp.find(r)!=mp.end()) ans+=mp[r];
        mp[r]++;
    }
    cout<<ans<<"\n";
    return 0;
}