// prefix sum + difference array

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,q;
    cin>>n>>q;
    vector<long long> a(n),diff(n+1,0);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=0;i<q;i++){
        long long l,r,val;
        cin>>l>>r>>val;
        diff[l-1]+=val;
        diff[r]-=val;
    }
    long long c=0;
    for(long long i=0;i<n;i++){
        c+=diff[i];
        a[i]+=c;
    }
    for(long long i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

