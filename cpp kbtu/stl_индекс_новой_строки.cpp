#include <iostream>
#include <string>
#include <set>
#include <map>
/* Дается N строк, надо вывести индекс строки если строка встретилась в первый раз, если строка уже встречалась, ничего выводить не надо */
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int> a;
    string s;
    cin>>s;
    a.insert({s,1});
    for (int i=1;i<n;i++){
        cin>>s;
        if (a.count(s)>0){
            continue;
        }
        a.insert({s,i+1});
    }
    map <string, int>::iterator blue;
    for (blue=a.begin();blue!=a.end();blue++){
        cout<<blue->first<<" "<<blue->second<<endl;
    }

    return 0;
}
