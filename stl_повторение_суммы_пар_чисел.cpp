#include <iostream>
#include <vector>
/* ������ N ��� �����, ���� ������� ������� ��� ����� ���� ���� ����������� � ���������� ���� ��� ������ ���� */
using namespace std;
int main(){
    vector <int> d;
    int n,a,b;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        d.push_back(a+b);
        int k=0;
        for (int j=0;j<i;j++){
            if (d.back()==d[j])
                k++;
        }
        cout<<k<<" ";
    }

    return 0;
}
