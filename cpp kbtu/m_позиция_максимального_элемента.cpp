#include <iostream>
using namespace std;
int main(){
    int n,b,m;
    cin>>n;
    int a[n+1];
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    b=a[1];
    for (int i=2;i<=n;i++){
        if(a[i]>b){
            b=a[i];
        }
    }
    for (int i=1;i<=n;i++){
        if(a[i]==b){
            cout<<i;
            break;
        }
    }


    return 0;
}
