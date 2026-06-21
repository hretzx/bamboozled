#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    vector<int> a(n);
    int target;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the target: ";
    cin>>target;
    int low=0,high=n-1;
    int m=high/2;
    int ind=-1;
    while(low<=high){
        if(a[m]==target){
            ind=m;
            break;
        }
        if(a[low]<=a[m]){
            if(a[low]<=target && target<a[m]){
                high=m-1;
            }
            else{
                low=m+1;
            }
        }
        else{
            if(a[m]<target && target<=a[high]){
                low=m+1;
            }
            else{
                high=m-1;
            }
        }
        m=(low+high)/2;
    }
    if(ind!=-1){
        cout<<"Found the target "<<target<<" at "<<ind<<"\n";
    }
    else{
        cout<<"Not found!";
    }
}

/*
one half is always sorted 
find mid
if a[mid]==target return;
check which half is sorted
if left is sorted ( a[low]<=a[mid) )
check if target lies between low & mid go left;
else go right;
else ( right half is sorted)
check if target lies between mid & high go right;
else go left;

*/