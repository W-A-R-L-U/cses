#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans=0,val=5;
    while(val<=n){
        ans+=n/val;
        val*=5;
    }
    cout<<ans<<"\n";
    return 0;
}