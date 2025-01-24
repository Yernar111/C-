#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int h=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for (int i=0;i<n;i++){
        int k=0;
        for (int j=0;j<m;j++){
            k+=a[i][j];
        }
        if (k>=h){
            h=k;
        }
    }
    cout<<h;

	return 0;
}

