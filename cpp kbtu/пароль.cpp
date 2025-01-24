#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    int a,b;
    cout<<"Придумайте пароль: ";
    cin>>a;
    cout<<"Ваш пароль: "<<a<<endl;
    b=0;
    while (b!=a){
        cout<<"Введите пароль еще раз: ";
        cin>>b;
        if (b!=a)
            cout<<"Не правильно!"<<" ";
    }
    cout<<"Пароль введен правильно!";

    return 0;

}
