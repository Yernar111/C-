#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
/* ���� �������� �������� � ������� M ������, N �� ��� � ���������. ���� ����� � ������� � ��������� 1-��,3-��,5-�� � �.�. ���, �� �������� �������� � ������ ���������. ��������� ���������� ������ ������� ���� �������� ����� ����� �� ��������� */
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <pair<int, int>> a;
    for (int i=0;i<m;i++){
        int t;
        cin>>t;
        a.push_back({t,1});
    }
    int j=0;
    int k=0;
    for (int i=1;i<=n;i++){
        if (i==a[j].first){
            if (a[j].second%2==1){
                i=1;
                j=0;
                a[j].second++;
                k++;
                continue;
            }
            else if(a[j].second%2==0){
                j++;
                a[j].second=1;
            }
        }
        k++;
    }
    cout<<k;
    return 0;
}
