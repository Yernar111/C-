#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    int a,b;
    cout<<"���������� ������: ";
    cin>>a;
    cout<<"��� ������: "<<a<<endl;
    b=0;
    while (b!=a){
        cout<<"������� ������ ��� ���: ";
        cin>>b;
        if (b!=a)
            cout<<"�� ���������!"<<" ";
    }
    cout<<"������ ������ ���������!";

    return 0;

}
