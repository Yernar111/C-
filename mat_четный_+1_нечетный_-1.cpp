#include <iostream>
using namespace std;
/* Если сумма координат элемента четная то +1, если нет то -1 */
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    int b[n+1][m+1];

    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i+j)%2==0){
                b[i][j]=a[i][j]+1;
            }
            else{
                b[i][j]=a[i][j]-1;
            }
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
