#include <iostream>
/* Создать массив элементы которого содержат абсолютное значение разности первого и второго массива */
using namespace std;

int func(int n){
    int c[n];

    int a[n],b[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        cin>>b[i];
    }


    for (int i=0;i<n;i++){
        c[i]=abs(b[i]-a[i]);
        cout<<c[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    func(n);


    return 0;
}

