#include <iostream>

using namespace std;
int main(){
    int n,k=0;
    cin>>n;
    int a[n];
    int b[1000]={};
    for (int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]=b[a[i]]+1;
    }
    for (int i=0;i<1000;i++){
        if (b[i]>1){
            k=k+b[i];
        }
    }
    cout<<k;

    return 0;
}
