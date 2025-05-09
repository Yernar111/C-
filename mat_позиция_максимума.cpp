#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1][n+1],m=1,k=1,b=-2e9;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin>>a[i][j];
            if (a[i][j]>b){
                b=a[i][j];
                m=i;
                k=j;
            }
        }
    }
    cout<<m<<" "<<k;

    return 0;
}
