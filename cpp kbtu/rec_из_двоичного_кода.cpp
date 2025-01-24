#include <bits/stdc++.h>
using namespace std;

int degree(int k){
    if (k==0)
        return 1;
    return degree(k-1)*2;
}

int check(string s, int i, int k, int n){
    if (i==s.size())
        return n;
    n+=(s[i]-48)*degree(k);
    return check(s,i+1,k-1,n);
}

int main(){
    string s;
    cin>>s;
    cout<<check(s,0,s.size()-1,0);

    return 0;

}
