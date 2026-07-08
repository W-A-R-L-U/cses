#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> fr(26,0);
    for(char& c:s) fr[c-'A']++;
    int count=0;
    char ch=0;
    for(int i=0;i<26;i++) if(fr[i]%2) count++,ch=('A'+i);
    if(count>1) cout<<"NO SOLUTION\n";
    else{
        string s1="",s2="";
        for(int i=0;i<26;i++) for(int j=0;j<fr[i]/2;j++) s1+=('A'+i),s2+=('A'+i);
        reverse(s2.begin(),s2.end());
        if(count) cout<<s1+ch+s2<<"\n";
        else cout<<s1+s2<<"\n";
    }
    return 0;
}