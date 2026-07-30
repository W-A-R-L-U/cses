#include<bits/stdc++.h>
using namespace std;

void findAll(int in,string& s,set<string>& ans,string& tmp,vector<bool>& vis){
    if(in==s.length()){
        ans.insert(tmp);
        return;
    }
    for(int i=0;i<s.length();i++){
        if(vis[i]) continue;
        tmp.push_back(s[i]);
        vis[i]=true;
        findAll(in+1,s,ans,tmp,vis);
        tmp.pop_back();
        vis[i]=false;
    }
}

int main(){
    string s;
    cin>>s;
    int n=s.length();
    sort(s.begin(),s.end());
    set<string> ans;
    string tmp="";
    vector<bool> vis(n,false);
    findAll(0,s,ans,tmp,vis);
    cout<<ans.size()<<"\n";
    for(auto& s1:ans) cout<<s1<<"\n";
    return 0;
}