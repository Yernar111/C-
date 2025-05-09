#include <iostream>
#include <vector>
/* Даются числа N(размер шахматного поля NxN), R и R ладьей с координатами (x,y). Для каждой новой ладьи найти количество клеток в которые ладья не может бить */
using namespace std;

int main(){
    int n,r,x,y;
    cin>>n>>r;
    int a[n+1][n+1];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            a[i][j]=0;
        }
    }
    vector <int> b;
    for (int i=0;i<r;i++){
        cin>>x>>y;
        int f=0;
            for (int j=1;j<=n;j++){
                for (int k=1;k<=n;k++){
                    if (x==k || y==j){
                        a[j][k]=1;
                    }
                    else if (a[j][k]==0){
                        f++;
                    }
                }
            }
        b.push_back(f);
    }
    for (int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }

    return 0;
}
