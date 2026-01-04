#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int bottom=j;
            int left=(2*n-2)-i;
            int right=(2*n-2)-j;
            int min1=top<bottom?top:bottom;
            int min2=left<right?left:right;
            int min=min1<min2?min1:min2;
            cout<<n-min<<" ";
        }
        cout<<"\n";
    }
}