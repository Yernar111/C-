#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i!=0 && j!=0){
                a[i][j]=i*j;
            }
            (j==0 ? a[i][j]=i : i==0 ? a[i][j]=j : true);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
