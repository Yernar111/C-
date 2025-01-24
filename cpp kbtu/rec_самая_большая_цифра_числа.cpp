#include <bits/stdc++.h>
using namespace std;

int check(string s, int m, int i){
    if (i==s.size())
        return m;
    if (s[i]-48>=m)
        return check(s,s[i]-48,i+1);
    return check(s,m,i+1);
}

int main() {
    string n;
    cin>>n;
    cout<<check(n,0,0);
    return 0;

}
