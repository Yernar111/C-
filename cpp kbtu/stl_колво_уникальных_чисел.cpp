#include <iostream>
#include <set>
/* Количество уникальных чисел */
using namespace std;

int main(){
    int n;
    set <int> a;
    while(cin>>n){
        a.insert(n);
    }
    cout<<a.size();

    return 0;
}
