#include <iostream>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int i=1;i<=n;i++){
        if (i==l){
            for (int j=r;j>=l;j--){
                cout<<a[j]<<" ";
            }
            i=r;
        }
        else{
            cout<<a[i]<<" ";
        }
    }

    return 0;
}
