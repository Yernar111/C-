#include <iostream>
using namespace std;
/* Заполнить каждый ряд максимальным значением этого ряда */
int main(){
    int n;
    cin>>n;
    int a[n][n],b[n][n];
    for (int i=0;i<n;i++){
        int k=0;
        for (int j=0;j<n;j++){
            cin>>a[i][j];
            if (a[i][j]>=k){
                k=a[i][j];
            }
        }
        for (int m=0;m<n;m++){
            b[i][m]=k;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

	return 0;
}
