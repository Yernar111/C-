#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    int b,y;
    string a,x;
    cout<<"������� ������� �� ������� ����� ������ �����: "<<endl;
    cin>>a>>b;
    cout<<"������� ��� ���� �������: "<<endl;
    cin>>x>>y;
    if (a==x || b==y){
        cout<<"����� ����� ������� �� ��� �������";
    }
    else{
        cout<<"����� �� ����� ������� �� ��� �������";
    }


}
