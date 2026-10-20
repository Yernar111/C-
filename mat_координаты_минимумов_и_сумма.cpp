#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"coordinates of min elements: "<<endl;
    int q=0;
    for (int j=1;j<=m;j++){
        int k=a[1][j],e=1; 
        for(int i=2;i<=n;i++){
            if(a[i][j]<k){
                k=a[i][j];
                e=i;
             }
        }
        q+=k;
        cout<<e<<";"<<j<<endl;
    }
    cout<<endl<<"Their sum: "<<endl<<q;

    return 0;
}
