#include <iostream>
#include <iomanip>
using namespace std;
/* ����� a ����� ���� ������������, n ������ ����������� */
double check(double a,double n){
    if (n<=1)
        return a;
    return check(a,n-1)*a;
}

int main(){
    double a,n;
    cin>>a>>n;
    cout<<fixed<<setprecision(10)<<check(a,n);
	return 0;
}
