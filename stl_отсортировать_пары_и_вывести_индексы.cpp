#include <iostream>
#include <set>
/* ������ N ��� �����, ���� ������������� ��� ���� �� �� ����� � ����� ������� ������� */
using namespace std;
int main(){
    set <pair<int, int>> a;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int k,m;
        cin>>k>>m;
        a.insert({k+m,i+1});
    }
    set <pair<int, int>>::iterator b;
    for (b=a.begin();b!=a.end();b++){
        cout<<b->second<<" ";
    }

    return 0;
}
