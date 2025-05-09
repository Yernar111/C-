#include <iostream>
#include <set>
#include <unordered_set>
/* Найти наименьшее число на отрезке(>999) каждая цифра которого уникальна, если такого числа нет то вывести ошибку */
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    unordered_set <int> c;
    for (int i=a;i<=b;i++){
        int m=i;
        int k=0;
        while(m!=0){
            int z=m%10;
            c.insert(z);
            m/=10;
            k++;
        }
        if (k==c.size()){
            unordered_set <int>::iterator blue;
            for (blue=c.begin();blue!=c.end();blue++){
                cout<<*blue;
            }
            return 0;
        }
        c.clear();
    }
    cout<<"Understandable, have a great day";
    return 0;

}
