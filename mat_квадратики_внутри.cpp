#include <iostream>
using namespace std;
/* ���� �� ������ ������� ���������� 2�2 ����������� ���� ����� ������ */

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<m-1;j++){
            if (a[i][j]==a[i+1][j] && a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j+1]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";

	return 0;
}
