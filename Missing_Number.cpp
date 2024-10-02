#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ca(n+1);
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        ca[a]=1;
    }
    for(int i=1;i<=n;i++){
        if(!ca[i]){
            cout<<i;
            break;
        }
    }
    return 0;
}