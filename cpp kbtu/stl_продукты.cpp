#include <iostream>
#include <string>
#include <map>
#include <set>
/* Дается N ингредиентов, M пар ингредиентов которые имеются у нас и последний ингредиент. Найти пары в которых встречается этот последний ингредиент */
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    string c,d;
    multimap <string, string> b;
    for (int i=0;i<m;i++){
        cin>>c>>d;
        b.insert({c,d});
    }
    string e;
    cin>>e;
    int k=0;
    set <string> f;
    multimap <string, string>::iterator up;
    for (up=b.begin();up!=b.end();up++){
        if (up->first==e){
            f.insert(up->second);
        }
        else if (up->second==e){
            f.insert(up->first);
        }
    }
    cout<<f.size()<<endl;
    for (auto look : f){
        cout<<look<<" ";
    }

    return 0;
}
