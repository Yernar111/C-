#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int g=n;
    int k=0,m=1;
    while (g>=2){
        for (int i=k;i<n-k;i++){
            if (a[i][k]!=a[k][i]){
                cout<<"Not perfect.";
                return 0;
            }
            if (a[i+1][n-m]!=a[n-m][i+1] && i!=n-m){
                cout<<"Not perfect.";
                return 0;
            }
        }
        if (a[n-1-k][k]!=a[k][n-1-k]){
            cout<<"Not perfect.";
            return 0;
        }
        k++;
        m++;
        g=g-2;
    }

    cout<<"Perfect.";

	return 0;
}
