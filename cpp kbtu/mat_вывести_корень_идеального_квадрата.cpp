#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
            bool q=false;
            for (int k=1;k*k<=a[i][j];k++){
                if (k*k==a[i][j]){
                    b[i][j]=k;
                    q=true;
                }
            }
            if (!q)
                b[i][j]=a[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
