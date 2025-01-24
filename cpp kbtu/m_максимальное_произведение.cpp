#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=0;
    int m=a[0];
    for (int i=1;i<n;i++){
        if (a[i]>m){
            k=m;
            m=a[i];
        }
        else if (a[i]<m && a[i]>k){
            k=a[i];
        }
    }
    cout<<m*k;
    return 0;
}
