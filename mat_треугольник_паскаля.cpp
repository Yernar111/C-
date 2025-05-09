#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n+1][n+1];
    for (int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            if (i==j || j==0)
                a[i][j]=1;
            else if (j>i)
                a[i][j]=0;
            else if (j<i){
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
    }
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n;j++){
            if (j>i){
                continue;
            }
            else{
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}
