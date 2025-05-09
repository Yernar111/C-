#include <bits/stdc++.h>
using namespace std;

long long check(long long n, long long m){
    if (n==0){
        return m;
    }
    cin>>n;
    return check(n,m+n);

}

int main() {
    long long n;
    cin>>n;
    cout<<check(n,n);
    return 0;

}
