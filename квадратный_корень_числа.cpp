#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(i*i==n){
            cout<<i;
            return 0;
        }
    }
    cout<<n;

    return 0;
}
