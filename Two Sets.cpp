#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum=1ll*n*(n+1)/2;
    if(sum%2==0){
        vector<int> a,b;
        long long val=sum/2;
        for(int i=n;i>=1;i--){
            if(val>=i){
                val-=i;
                a.push_back(i);
            }else{
                b.push_back(i);
            }
        }
        cout<<"YES\n";
        cout<<a.size()<<"\n";
        for(int& i:a) cout<<i<<" ";
        cout<<"\n"<<b.size()<<"\n";
        for(int& i:b) cout<<i<<" ";
        cout<<"\n";
    }else{
        cout<<"NO\n";
    }
}