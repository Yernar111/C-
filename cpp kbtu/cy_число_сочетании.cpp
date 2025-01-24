#include <iostream>
using namespace std;

int main(){
    int n,k,e,b=1,c=1,d=1;
    cin>>n>>k;
    int g=n-k;
    for (int i=2;i<=n;i++){
        b=b*i;
    }
    for (int i=2;i<=k;i++){
        c=c*i;
    }
    for (int i=2;i<=g;i++){
        d=d*i;
    }

    e=b/(c*d);
    cout<<e;

    return 0;
}

