#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for (int i=1;i<=n;i++){
        int k=0;
        for (int j=1;j<=m;j++){
            k+=a[i][j];
        }
        cout<<"The sum of row number "<<i<<" is "<<k<<endl;

    }

    for (int j=1;j<=m;j++){
        int k=0;
        for (int i=1;i<=n;i++){
            k+=a[i][j];
        }
        cout<<"The sum of column number "<<j<<" is "<<k<<endl;
    }


    return 0;
}
