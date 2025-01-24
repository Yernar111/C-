#include <iostream>
using namespace std;
/* Находим строку которая меньше всех по сумме элементов этой строки */
int main(){
    int n,m;
    cin>>n>>m;
    int b=1000,e=1;
    int a[n][m];
    for (int i=0;i<n;i++){
        int k=0;
        for (int j=0;j<m;j++){
            cin>>a[i][j];
            k+=a[i][j];
        }
        if (k<b){
            b=k;
            e=i+1;
        }
    }
    cout<<e;

    return 0;
}
