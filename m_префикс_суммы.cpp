#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n],b[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    b[0]=a[0];
    for (int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
    }
    for (int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

    return 0;
}

