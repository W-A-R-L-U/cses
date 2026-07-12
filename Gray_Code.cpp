#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> ans={"0","1"};
    for(int i=1;i<n;i++){
        vector<string> tmp;
        for(string& s:ans) tmp.push_back("0"+s);
        for(int i=ans.size()-1;i>=0;i--) tmp.push_back("1"+ans[i]);
        ans=tmp;
    }
    for(string& s:ans) cout<<s<<"\n";
    return 0;
}