#include <bits/stdc++.h>
using namespace std;

bool check2(int i,int j){
    if (j*j>i)
        return true;
    if (i%j==0)
        return false;
    return check2(i,j+1);

}

int check(int n, int i, int k){
    if (k==n)
        return i;
    if (check2(i+1,2))
        return check(n,i+1,k+1);
    return check(n,i+1,k);
}

int main(){
    int n;
    cin>>n;
    cout<<check(n,2,1);

    return 0;

}
