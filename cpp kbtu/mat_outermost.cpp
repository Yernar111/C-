#include <iostream>
/* Если элемент матрицы лежит на диагонали, первой и последней строке или столбце то написать вместо этого элемента "*" */
using namespace std;

int main(){
    int n,k=0;
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
            if (i==0 || i==n-1 || j==0 || j==n-1 || i==j || i+j+1==n)
                a[i][j]=-1;
            else{
                k+=a[i][j];
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i][j]==-1){
                cout<<"* ";
            }
            else
               cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<k;

	return 0;
}
