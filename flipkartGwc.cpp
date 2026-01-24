#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter: ";
    getline(cin,s);
    vector<string> a;
    int n=s.length();
    string word="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            a.push_back(word);
            word="";
        }
        else{
            word=word+s[i];
        }
    }
    a.push_back(word);
    sort(a.begin(),a.end());
    for(int i=0;i<(int)a.size();i++){
        string d=a[i];
        if(d[0]=='a' || d[0]=='e' ||d[0]=='i' || d[0]=='o' || d[0]=='u'   ){
            cout<<i+1<<" "<<d<<"\n";
        }
    }
}