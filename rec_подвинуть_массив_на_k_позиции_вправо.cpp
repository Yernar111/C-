#include <iostream>
using namespace std;

void check(int a[],int i, int n){
    if (i==n)
        return;
    cout<<a[i]<<" ";
    return check(a,i+1,n);
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    check(a,k-1,n);
    check(a,0,k-1);
    
    return 0;
}
