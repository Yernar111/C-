#include <iostream>
using namespace std;
/* ��������� ���� ��� ���� ������ ������� ������ � ���� ������, ���� ��� �������� ������� ��� ������� �������� */
int check(int n, int a[]){
    if (n<=2)
        return 1;
    if (a[n]!=0)
        return a[n];
    a[n]=check(n-1,a) + check (n-2, a);
    return a[n];
}

int main(){
    int n;
    cin>>n;
    int a[n+1]={};
    cout<<check(n, a);
    return 0;
}
