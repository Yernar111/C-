#include <iostream>

using namespace std;

int main() {
    int n,k=0;
    cin>>n;
    int a[n],b[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]%2==0){
            b[k]=a[i];
            k++;
        }
    }
    for (int i=0;i<n;i++){
        if (a[i]%2==1){
            b[k]=a[i];
            k++;
        }
        cout<<b[i]<<" ";
    }

    return 0;
}
