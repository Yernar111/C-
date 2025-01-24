#include <iostream>
using namespace std;

int main(){
    char a[9][9];
    int x,y;
    cin>>x>>y;
    for (int i=1;i<=8;i++){
        for (int j=1;j<=8;j++){
            if (x==j || y==i){
                a[i][j]='*';
            }
            else{
                a[i][j]='.';
            }
        }
    }
    a[x][y]='#';
    for (int i=1;i<=8;i++){
        for (int j=1;j<=8;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
