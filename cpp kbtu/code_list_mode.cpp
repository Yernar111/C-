#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[1000]={};
    for (int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]=b[a[i]]+1;
    }
    int k=0;
    for (int i=0;i<1000;i++){
        if (b[i]>k){
            k=b[i];
        }
    }
    for(int i=1000;i>=0;i--){
        if (k==b[i]){
            cout<<i<<" ";
        }
    }

    return 0;
}
