#include <bits/stdc++.h>
using namespace std;

bool check(string s,int i,int k){
    if (i==s.size() && k==0)
        return true;
    else if ((i==s.size() && k!=0) || k<0)
        return false;
    if (s[i]=='(')
        return check(s,i+1,k+1);
    return check(s,i+1,k-1);
}

int main(){
    string s;
    cin>>s;
    if (check(s,0,0))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;

}
