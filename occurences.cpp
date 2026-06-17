#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    int m=n/2;
    int c=0;
    int ans1;
    while(l<=r){
        if(a[m]>target){
            r=m-1;
        }
        else if(a[m]<target){
            l=m+1;
        }
        else{
            ans1=m;
            r=m-1;
        }
        m=(l+r)/2;
    }
    int ans2;
    l=0,r=n-1,m=n/2;
    while(l<=r){
        if(a[m]>target){
            r=m-1;
        }
        else if(a[m]<target){
            l=m+1;
        }
        else{
            ans2=m;
            l=m+1;
        }
        m=(l+r)/2;
    }
    cout<<"The occurence of "<<target<<" is "<<(ans2-ans1+1)<<"\n";
}