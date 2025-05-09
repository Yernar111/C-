#include <iostream>
using namespace std;
int check(int n, int m, int i){
    if (i==n)
        return m;
    int k;
    cin>>k;
    return check(n,m+k,i+1);
}


int main(){
    int n;
    cin>>n;
    cout<<check(n,0,0);
    return 0;
}
