#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;i++){
        int k=a[i][i+1]-a[i][i];
        for (int j=0;j<n;j++){
            if (i<j){
                if (a[i][j]-a[i][j-1]!=k){
                    cout<<"No";
                    return 0;
                }
                k++
            }
        }
    }
    for (int i=0;i<n;i++){
        int k=;
        for (int j=0;j<n;j++){
            if (i<j){
                if (a[i][j]-a[i][j-1]!=k){
                    cout<<"No";
                    return 0;
                }
                k++
            }
        }
    }
    cout<<"Yes";

    return 0;
}
