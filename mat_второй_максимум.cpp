#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b=a[0][0]; /*�������� */
    int m; /* ������ �������� */
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i][j]>b){
                m=b;
                b=a[i][j];
            }
            else if(a[i][j]<b && a[i][j]>m){ /* ���� ������� ������ ������� ���������, �� ������ ��������� */
                m=a[i][j];
            }
        }
    }
    cout<<m;


    return 0;
}
