#include <iostream>
using namespace std;

int check(int n, int k, int m){
    if (n%10==k)
        return k;
    if (n==0)
        return check(m,k-1,m);
    return check(n/10,k,m);
}

int main(){
    int n;
    cin>>n;
    cout<<check(n,9,n);

    return 0;
}
