#include <iostream>
#include <vector>
#include <cmath>
/* ������ ��� ����� N � K. ������ ������� � ���������� ���� � ��������. ������� ���� �� �������� ����� ������� �� ������ ������, �� a[i][j] ������ ����� �������� ������� ����� ��������� �� i ������ �� j ������(i<j). ����� ���������� ������� ������� ������ ������� ������� ����� ������ �������� �������� �� ������ �����. ������� �������, ���� ��� �������� ������� �� ����� 0 */
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int c=1;
    int q;
    while (true){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (k!=0 && a[i][j]!=0){
                if (a[i][j]>=k){
                    a[i][j]=a[i][j]-k;
                    k=0;
                }
                else if(a[i][j]<k){
                    a[i][j]=0;
                    k=k-a[i][j];
                }
            }

        }

    }

    k=a[i][i+c];
    c++;
    }

    return 0;
}
