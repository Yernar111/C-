#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n+2][m+2];
    for (int i=0;i<=n+1;i++){
        for (int j=0;j<=m+1;j++){
            a[i][j]=0;
        }
    }
    int t,w;
    for (int i=0;i<k;i++){
        cin>>t>>w;
        a[t+1][w+1]=-1;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (a[i][j]!=-1){
                int h=0;
                for (int r=-1;r<2;r++){
                    for (int f=-1;f<2;f++){
                        if (a[i+r][j+f]==-1){
                            h++;
                        }
                    }
                }
                if (h>0){
                    a[i][j]=h;
                }
            }
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (a[i][j]==-1){
                cout<<"* ";
            }
            else if(a[i][j]==0){
                cout<<". ";
            }
            else{
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }

	return 0;
}
