#include <iostream>
#include <cmath>
using namespace std;

void check(int a[], int i, int n){
    for (int j=i;j<n;j++){
        cout<<a[j]<<" ";
    }
    return;
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    if (m>0){
        check(a,n-m,n);
        check(a,0,n-m);
    }
    else{
        m=abs(m);
        check(a,m,n);
        check(a,0,m);
    }

	return 0;
}
