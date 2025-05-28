#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int te;
    cin>>te;
    for(int t=0;t<te;t++){
        ll y,x;
        cin>>y>>x;
        if(y>=x){
            if(y%2==0) cout<<y*y-x+1<<"\n";
            else cout<<(y-1)*(y-1)+1+x-1<<"\n";
        }else{
            if(x%2==1) cout<<x*x-y+1<<"\n";
            else cout<<(x-1)*(x-1)+1+y-1<<"\n";
        }
    }
    return 0;
}

/* Observation :

    for row it always start with row*row is row is even and row*row+1 if odd
    similarly for col starts with col*col if odd and col*col+1 if even
    row and col which is greater it dominates so find the total available and add or subtract other as needed
*/