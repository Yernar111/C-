#include <iostream>
using namespace std;
int main(){
    int n,k=0;
    cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin>>a[i][j];
            if(i+j-1==n){
                k+=a[i][j];
            }
        }
    }
    cout<<k;

    return 0;
}
