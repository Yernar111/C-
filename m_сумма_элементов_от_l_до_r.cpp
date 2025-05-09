#include <iostream>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int b=0;
    for (int i=l;i<=r;i++){
        b+=a[i];
    }
    cout<<b;

    return 0;
}
