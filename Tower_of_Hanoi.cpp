#include<bits/stdc++.h>
using namespace std;

void toh(int n,int a,int b,int c){
    if(n==0) return;
    toh(n-1,a,c,b);
    cout<<a<<" "<<c<<"\n";
    toh(n-1,b,a,c);
}

int main(){
    int n;
    cin>>n;
    cout<<((1<<n)-1)<<"\n";
    toh(n,1,2,3);
    return 0;
}