#include <iostream>

/* ������ ������ � ������� ����� �� n, ��������� ������� ��� ������������ ������ ������ �� �������, ��������� ������ ��� 0 */

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            (i==0 ? cout<<j<<" " : j==0 ? cout<<i<<" " : i!=j ? cout<<0<<" " : cout<<i*j<<" ");
        }
        cout<<endl;
    }

    return 0;
}
