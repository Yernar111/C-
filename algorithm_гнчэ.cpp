#include <bits/stdc++.h>
using namespace std;
/* ��������� ��������� ���������� �� 1 �� n ������������, ��� ���� i-��� ������� ������ ���� ������� i ��� */
int main(){
    int n;
    cin>>n;
    int k=n*(n+1)/2;
    vector <int> a(k);
    int q=1,j=0;
    for (int i=0;i<a.size();i++){
        if (j==q){
            q++;
            j=1;
        }
        else{
            j++;
        }
        fill(a.begin()+i, a.end(), q);
    }
    for (int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
