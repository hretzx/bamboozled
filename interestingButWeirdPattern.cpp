#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(long long i=1;i<=10000;i++){ //10e9 
        long long n=i,sum=0,d=0;
        while(n>0){
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
        cout<<i-sum<<" ";
    }
}