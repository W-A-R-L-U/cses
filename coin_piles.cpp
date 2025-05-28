#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int te;
    cin>>te;
    for(int t=0;t<te;t++){
        ll a,b;
        cin>>a>>b;
        if((a+b)%3==0 && min(a,b)*2>=max(a,b)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}