#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
/* ������ ����� N(���������� ����) � N �����(a[1],a[2]...,a[n]), a[i] ����� �������� ����� ��������� ��������� �� ������ ������� � i-��� ����. ��������� ������� ��������� �� ������� ������ */
int main(){
    int n;
    map <string, double> a;
    cin>>n;
    double t=0; /* ����� ����� ��������� */
    for (int i=0;i<n;i++){
        int m;
        string s; /* �������� ������ */
        double k; /* ����� ��������� �� ����� ������ */
        cin>>m;
        for (int j=0;j<m;j++){
            cin>>s>>k;
            if (a.count(s)>0){
                a[s]=k+a[s];
            }
            else{
                a[s]=k;
            }
            t+=k;
        }
    }
    map <string, double>::iterator b;
    for (b=a.begin();b!=a.end();b++){
        cout<<b->first<<" "<<(b->second/t)*100.0<<endl;
    }

	return 0;
}
