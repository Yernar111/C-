#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <bool> a(n+1,true);
    a[0]=false;
    a[1]=false;
    for (int i=2;i<=n;i++){
        if (a[i] && i*i<=n){
            for (int j=i*i;j<=n;j+=i){
                a[j]=false;
            }
        }
        if (a[i])
            cout<<i<<" ";
    }

    return 0;
}
