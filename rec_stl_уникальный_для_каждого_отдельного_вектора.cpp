#include <bits/stdc++.h>
/* ������� symmetric difference ��� ���� ��������. Symmetric difference ��������� �� ��������� ������� ���� � ������ �������, �� ��� �� �� ����������� */
using namespace std;

void check(vector <int> a, vector <int> b, int i){
    if (i==a.size())
        return;
    int j=count(a.begin(),a.end(),b[i]);
    if (j>0)
        return check(a,b,i+1);
    cout<<b[i]<<" ";
    return check(a,b,i+1);
}

int main(){
    vector <int> a;
    vector <int> b;
    vector <int> c;
    int n;
    while (cin>>n){
        c.push_back(n);
    }
    for (int i=0;i<c.size()/2;i++){
        a.push_back(c[i]);
    }
    for (int i=c.size()/2;i<c.size();i++){
        b.push_back(c[i]);
    }
    check(b,a,0);
    check(a,b,0);

    return 0;
}
