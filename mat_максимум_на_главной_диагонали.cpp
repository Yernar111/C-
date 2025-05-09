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
    int k=a[0][0],g=1;
    for (int i=1;i<n;i++){
        if (a[i][i]>k){
            k=a[i][i];
            g=i+1;
        }
    }

    cout<<"Maximum element is: "<<k<<" with coordinates: "<<g<<";"<<g;

	return 0;
}
