#include <iostream>
#include <algorithm>
#include <set>
/* Дается число N и N чисел. Если число встречалось ранее выводить NO, иначе YES для каждого числа в новой строке */
using namespace std;

int main(){
    int n,m;
    cin>>n;
    set <int> a;
    cin>>m;
    a.insert(m);
    cout<<"YES"<<endl;
    for (int i=1;i<n;i++){
        cin>>m;
        if (a.count(m)>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        a.insert(m);
    }

    return 0;
}
